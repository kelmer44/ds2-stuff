# How the parts of Dark Seed II fit together

A plain-language map of what the game's program does and how its parts talk to each other.
It grows as we recover more of the original. It is written for people, not for the debugger:
no addresses and no jargon. The exact details live in `STRUCTS.md` and `contracts/`.

**How much do we trust each part?**
- ✅ Read in the program, checked against the real game files
- 🟡 Read in the program, but something named in the heading is not checked yet
- ❓ Seen from the outside only (the strings and the Windows calls it uses), not read yet

**Rule:** a function can only be marked done when its contract is complete and this file explains it.
`tools/mark.py` refuses otherwise, and `CHECKLIST.md` only ticks documented functions.

Last updated: 6 November 2026. Counts: see the table at the top of `CHECKLIST.md`.

## The game in one paragraph

Dark Seed II is a Windows 3.1 program, 184 KB, plus a large pile of data files. The program is small:
it knows how to open the data files, draw pictures on a Windows window, play sound and video by
asking Windows to do it, and run the game's own text scripts. Almost everything about the story, the
rooms and the conversations lives in the data files as plain text. That is why reimplementing the game
is mostly about reading the data correctly and running its scripts faithfully.

## The big picture

```mermaid
flowchart TD
    Start["Start-up ❓<br/>checks the CD, reads settings,<br/>makes the window"] --> Index["Resource index 🟡<br/>GFILE.HDR: where is every file?"]
    Index --> Glue["Glue files ✅<br/>108 big packages of game data"]
    Glue --> Scripts["Scripts and rooms ❓<br/>text files that say what happens"]
    Glue --> Pics["Pictures, palettes, sprites 🟡"]
    Glue --> Speech["Speech and sound ❓"]
    Scripts --> Game["Game loop ❓<br/>click, walk, talk, use things"]
    Pics --> Screen["Drawing and compositor 🟡<br/>WinG draws into a memory bitmap,<br/>then copies it to the window"]
    Speech --> Audio["Audio ❓<br/>WaveMix for speech and effects,<br/>MIDI for music"]
    Game --> Video["Cut-scenes ❓<br/>Windows plays the AVI files"]
    Game --> Saves["Save and load ❓"]
```

## Resources: the index and the glue files 🟡

**What it does.** The game's data is stored in 108 large "glue" files (`gl00_*.000`), a bit like zip
files without the zip. A small separate file, `GFILE.HDR`, is the phone book: for each of the 9291
resources (pictures, scripts, speech clips, text) it says which glue file holds it, how big it is
and where it starts.

**How it works.**
1. At start-up the game reads `GFILE.HDR` once. It keeps the list of glue file names and the full
   list of 9291 entries in memory. The list is sorted by name, so finding a resource is a quick search.
2. Each glue file starts with its own small table of contents (a copy of the phone-book lines for its
   files) followed by the data.
3. Most glue files (85 of 108) are **squeezed**. Squeezed files are split into 2 KB blocks. Each block
   is a series of short packets: either "copy these two bytes" or "repeat something that appeared a
   little earlier". The game unsqueezes a whole glue file into memory when a room needs it.
   The remaining 23 files (the always-needed ones and the big speech files) are stored plainly and
   read straight from disk when needed.
4. A request for a resource looks it up in the phone book, then either copies it out of the unsqueezed
   memory copy or reads it from the file.

**Asking for a resource by name.**
1. The name is copied, turned into capitals and padded with zeros to 12 characters, so `room0001.dat`
   and `ROOM0001.DAT` are the same request.
2. The phone book is searched like a dictionary: look at the middle line, go up or down, repeat. If
   the name is not there the game normally shows an error box (a few names are allowed to be missing
   quietly) and gives back nothing.
3. The phone-book line also says which glue file to use. Each glue file has a "where does it live" marker,
   set when the index is loaded: if the file can be found in the folder the game was started from it
   is used from there, otherwise from the folder named in the game's own settings file
   (`DARKSEED.INI`, section `DIRECTORY`, entry `CD`, normally the CD drive).
4. If that glue file is already unsqueezed in memory, the game does not copy anything. It creates a
   new "window" onto the right spot inside the memory copy and hands that out. Handing it back
   later removes only the window.
5. If it is not in memory, the game opens the plain glue file, jumps to the right spot, reserves memory and
   reads the bytes. Big reads happen in slices of about 64 KB, and between slices the game gives the
   sound mixer a nudge so speech does not stutter during a long read.
6. A squeezed file can only be used through its memory copy. The game loads and unsqueezes a whole
   squeezed glue file in one go, block by block. The size of the memory copy is stored in the file's first
   block, plus a little spare room. If the glue file is missing, the game writes a debug note and quits.

**What is loaded when.**
- At start-up, after the index: the walk-map package (`GL00_WLK`) and the text package (`GL00_TXT`,
  all conversations) are unsqueezed whole, then the variable list (`GameVar.IDX`), the object file
  `OBJ_9999.dat` and the fixed palette `fix.pal`.
- Whenever a room is entered: the room number is split into hundreds and the rest, so room 101 uses
  the package `GL00_101` and room 592 uses `GL00_592`; that package is unsqueezed whole (the previous
  room's memory is released first), then the room's object file is loaded and read.

**Errors.** Problems are shown in a Windows message box titled "Dark Seed II", in the form
"where: what" (for example the name of the routine and "Unable to find file").

**Checked against the real files.** The phone book, the table of contents inside each glue file and
the unsqueezing were checked against all 108 files: every resource lands on valid data (for example,
every picture starts with the picture marker). ✅ for the layout, the lookup rules, the unsqueezing and
the loading steps above (all read instruction by instruction).
🟡 because the start-up and room-entry routines that call these loaders are only partly read (what they
do besides loading), the parser of the object files is not read, and the two multiply/divide helpers of the
C library used for the block sizes (`10d0:055c`, `10d0:052a`) are not read.

**Our copy is Spanish.** The text and speech in these files are Spanish.

**For the ScummVM engine.** The 2011 engine unsqueezes the same way, which matches. It builds its
own index from the glue tables instead of reading `GFILE.HDR`; the result is the same, but the original
way is faster to start. The windows-onto-memory trick is not needed: ScummVM can hand out a slice of the
memory copy instead.

## Memory 🟡

**What it does.** The game asks Windows for blocks of memory through two tiny helpers: one to get a
block of a given size, one to give it back (the same helper also removes a "window" made by the
resource loader). It keeps count of how many blocks it has taken and given
back. If Windows cannot give memory, the game shows an error and stops.

**For ScummVM.** This becomes ordinary allocation; no behaviour to copy except the error on failure.
Marked 🟡 only because the exact error and exit path has not been read.

## Pictures and palettes 🟡

**What it does.** Everything you see is drawn from small pictures (`.BMP`) kept in the glue files. They are
ordinary Windows picture files with 256 colours. The game shares one set of 256 colours at a time (the
"palette"), taken from a `.pal` file (for example `fix.pal` at start-up) or from the colour table inside a
full-screen picture.

**How it works.**
1. A picture is looked up by name like any other resource and kept in memory exactly as stored. A small
   record keeps track of it: the Windows bitmap made from it (if any), where its file data is, its width
   and height, and four extra numbers.
2. **The four extra numbers are a trick.** Each sprite picture hides four small numbers (they can be
   negative) in header fields that Windows normally uses for printing size. The game copies them into the
   record and wipes them from the picture, so Windows never sees them. The first two say where the
   sprite's top-left corner is **relative to the point the character or object stands on** (so a sprite
   is drawn with its feet point at the object's position, even when that point lies outside the picture).
   The last two are not used by any code read so far.
3. **Two kinds of picture.** Full pictures (backgrounds) are stored as normal rows of pixels. Characters and
   objects are stored in the game's own compact form: for each row, "how many empty pixels, how many
   drawn pixels, then those pixels". Empty space is not stored. Windows cannot draw that form, so the game
   draws it with its own routine.
4. **Drawing.** Pictures are shared: asking for a name again returns the same loaded picture and counts one more
   user; it is freed when the last user lets go. To draw, the game cuts the wanted rectangle down to the
   off-screen picture it is painting (anything outside is dropped), works out where in the picture's rows
   to start (pictures are stored bottom row first), and then uses one of three small drawing routines.
   The colour with number 0 is see-through. The game repaints only the rectangles that changed: it draws
   the background part, then the objects over it, then copies that rectangle to the window.
   There are three small drawing routines: copy a block of pixels, copy a block while skipping one
   "see-through" colour, and draw the compact row form (also skipping the see-through colour). They work on
   the game's off-screen picture in memory, which is later shown on the window. They live in a part of the
   program that switches itself into 32-bit mode the first time it runs.
5. **Colours.** Setting a palette means building a Windows palette, making it current and telling Windows to
   use it. For the start-up picture the first and last colours are fixed to black and white (like Windows
   itself does) and the rest can be animated; an option can brighten all colours a little.

**Checked against the real files.** The picture header layout, the compact row form and the palette entry
order were checked on real files (✅ for those formats). The clipping and the choice between the three
drawing routines are read in full. 🟡 because the code that decides *which* objects are drawn in which order
and moves them (the rest of segment `1078`) is only partly read, the last two placement numbers have no known
use, and the picture from `DS2RUN.HDR` and the `.BMM` files are not understood.

**For the ScummVM engine.** ScummVM draws straight into an 8-bit or true-colour surface, so none of the Windows
palette or bitmap handling is needed. What must be reproduced is how the four numbers place a sprite, the
see-through colour, and the exact brightening rule.

## The scene compositor 🟡

**What it does.** It keeps the picture you see up to date. The room is a backdrop picture with sprites (the
characters and things you can see) drawn on top. The game does not redraw the whole window each frame. It
repaints only the rectangles that changed.

**How it works.**
1. **Sprites.** Each sprite has a picture to show now, the picture it showed last time, and an "anchor" point
   (where the thing stands). The sprite's top-left corner is the anchor plus the two offsets hidden in its
   picture. A sprite with no picture is invisible.
2. **Two lists.** The scene keeps two lists of sprites. Before drawing, each list is tidied (empty slots
   dropped) and sorted by the anchor's vertical position, smallest first, so things further up the screen
   (further away) are drawn first and nearer things cover them. The second list is drawn after the first, so it
   always ends up on top. When two sprites have the same height their order is not guaranteed.
3. **Changes.** When a sprite appears, disappears or moves, the game adds its old and new rectangles to one "dirty"
   rectangle for the scene (the union of everything that changed).
4. **Repainting.** For the dirty rectangle the game makes a small temporary picture of exactly that size, paints
   the backdrop part (or black if there is no backdrop), draws every sprite that touches it (cut to the play-area
   rectangle), and copies the result to the window in one step. Then it throws the temporary picture away.
5. **Window repaints.** When Windows asks the game to repaint a rectangle, the parts outside the play area show only
   the backdrop; the part inside gets the full composition.
6. **Single-sprite shortcuts.** There are also versions that update one sprite at once (erase, first draw, or move),
   repainting just the area it covered.
7. A developer flag can draw a small text in each repainted rectangle. Normal play does not use it.

**Checked.** The drawing order rule, the lists, the dirty rectangle and the repaint steps were read instruction by
instruction (🟡 rather than ✅ because nothing has been compared with the original on screen). Unknown: what
the "ignore the depth threshold" flag on a sprite means, and which sprites go to the second list.

**For ScummVM.** ScummVM can draw into one surface and use dirty rectangles, or just redraw each frame. What
must match is the draw order (sort by anchor y, list 2 on top), the top-left = anchor + offsets rule, the
transparent colour 0, and the play-area clipping.

## Room loading and local variables 🟡

**What it does.** Entering a room builds everything for it from its text file, and leaving a room throws it away again.

**How it works.**
1. The game loads the room's text file and creates one big "room record". It then reads the file line by line. Header lines fill the
   record: the backdrop picture name, the walkable map name (and two optional numbers), how big characters should look at the far and near
   ends (two numbers; a third is ignored), and the room's clip rectangle.
2. Each section start hands the following lines to a section reader: entry, music, sprites, mirrors, palette.
3. The sprite section creates one record per animated thing: its picture name, a few numbers (flags, which of the two draw lists it goes
   to, how many frames), the frame order (frames 1 to N unless the file lists them), effects and speech to play, and the conditions that switch it on.
4. **Room-local variables.** The game variable list reserves 20 spare slots. A room's own variables (named with the room number in front, such as
   `101OpenDoor`) are written into those slots in alphabetical order with value 0 when the room is loaded, and the slots are reset when the room is
   left. The room files must list their names in alphabetical order, with at most 20, or the name lookup would break (all shipped rooms comply).
5. When the player leaves, the game frees the entry list, every sprite and its pictures, the room record and the room's whole package of data.

**Entry section.** When the room is entered, the game reads a list of entry records. Each says under which condition it applies, where the player appears (`From=` and `XYRoom=`), what to show or play, and which variables to change. A `WaitUntil=` starts a new record. A video line (`Anim=` with a window rectangle and a file name) starts a video.

**Checked.** The header keys, the section dispatch, the local-variable slots and the room limits were read in the code and checked against all 83
room files. 🟡 because the section readers for entry, music, mirrors and palette are only partly read and the sprite section's last fields are open.

**For ScummVM.** Keep room-local variables separate from the global list (or reproduce the 20-slot scheme); reset them to 0 on room load; draw
list is chosen by the fourth `Status=` number; default frame sequence is 1..N.

## Room and object text files 🟡

**What it does.** Everything that happens in a room is written in plain text files that the game reads when you enter: one file per
room (`ROOMnnnn.DAT`: the backdrop, the walkable map, how big characters are, what plays when you enter, music, animated things, mirrors)
and one file per room's objects (`OBJ_nnnn.DAT`: for each thing you can click, what happens when you walk to, look at, or use it). A
separate file (`OBJ_9999.DAT`) describes the inventory items. There are 167 such files (84 object files, 83 room files).

**How it works.**
1. Each line is `Key=value` and a `;` starts a comment. The game reads a line, cuts the comment, finds the key in a fixed list of
   keywords (not case sensitive) and hands the value to the part that knows what to do. A line with an unknown key, or no `=`, is
   ignored without any message.
2. Blocks start with a condition (`Cond=`, optionally more than one list; either list may be true). The lines that follow are the actions: move to
   a place, show a text, play an effect, run a conversation, play music, start an animation, change variables, wait until something is true.
3. A condition that has no action after it is reported ("No Info for this Condition!") when reading object files.
4. The full list of keys, with how often the real files use them, is in `SCRIPT_LANGUAGE.md`.

**Checked.** The line rules and both keyword tables were read in the code, and every key used in the 167 files was found in the tables
(except one misspelling, `Chnage=`, which the game ignores). 🟡 because the code that gives each key its effect (the section readers and the
script runner) is only partly read.

**For ScummVM.** Treat an unknown key as "ignore the line" (do not abort), and do not accept misspelled keys: the one in `OBJ_0307.DAT` must stay
without effect to match the original.

## Game variables and conditions 🟡

**What it does.** The whole game state lives in about 330 named variables (little numbers, mostly 0, 1 or 2). They record
whether you talked to someone, hold a door open or closed, say whether the player's character is shown, and so on. Scripts
decide what to run by testing variables, and change them as they play.

**How it works.**
1. At start-up the game reads the list of names and starting values from a text file, `GameVar.IDX`. The names are kept in
   alphabetical order (ignoring capitals) so a name can be found quickly by halving the list. The game checks the order and
   reports an error if the file is not sorted. The first entry is a "dummy": any name the game cannot find ends up there.
2. A condition in a script is a short list of tests, such as "this variable is 1" or "that variable is 0". It is turned
   into compact numbers once, when the script is read. A prefix character on a name chooses the test: nothing means "is 1",
   `!` "is 0", `*` "is 2", `+` "is 1 or more", `-` "is 1 or less", `^` "is 2 or more", `@` "is 2 or less", and `=NAME,n` "is n".
3. A list of tests is true when every test is true. A script block can have several such lists and runs when any one of
   them is true.
4. A change in a script uses the same notation: nothing sets the variable to 1, `!` to 0, `*` to 2, `+` adds 1, `-` takes 1 away,
   `^` adds 2, `@` takes 2 away, `/` flips between 0 and 1, and `=NAME,n` sets it to n (0 to 31).

**Checked.** The file format, the name search, the test and change rules and the prefix characters were read in the code and
checked against the real `GameVar.IDX`. 🟡 because the code that uses these tests in the script blocks (the game tick) is not
read yet, and the per-room local variables are not known.

**For ScummVM.** Variables are signed 16-bit values; do not clamp them to 0..2. The prefix rules above replace the guesses
made in the 2011 engine.

## Sprite scaling and the player's sprites 🟡

**What it does.** Characters and objects get smaller the further up the screen they stand, so the room looks deep. The
game does this by making a scaled copy of the picture each time it changes.

**How it works.**
1. Every room has two numbers: where the "far" line is (a screen height) and how many pixels deep the scaling range is.
2. A thing standing at height `y` gets the scale `(y - far line) * 128 / depth`, as a number where 128 means normal size.
   The player's character uses 134 instead of 128 (about 5% bigger at the front). The result is kept between 10 and 180
   (about 8% to 140%).
3. The scaled picture is a new copy: its width and height are the original's times the scale (never below 5 pixels), the
   small placement offsets in the picture header are scaled the same way, and the pixels are resampled by a general
   picture-stretching routine that the game includes (the WinG sample code).
4. The scaled copy replaces the thing's picture. If its size or anchor changed, the compositor repaints the changed rectangle.
5. Each tick, the game goes through every object in the room, picks its current animation frame, scales it if needed and hands
   it to the compositor. Then the player's character. A variable says whether the player is shown or hidden.

**Checked.** The scale rule and the size and offset rules were read from the code (the player's second sprite is only partly
read). 🟡 because the stretch routine that does the actual pixel resampling and mirroring is unread, so the exact pixels of a scaled
sprite are not known yet.

**For ScummVM.** Use the same formula, clamp and 5-pixel minimum; scale the placement offsets too. Which source pixel each new pixel takes
is still to be recovered.

## Changing room 🟡

**What it does.** Going through a door runs one fixed sequence.
1. The game remembers where you came from (the variable `FromRoom`) and the room number to go to.
2. It frees the old room, loads the new room's data package and the room and object text files, builds the sprite records and the walk grid.
   **The walk map** is a tiny 64 by 48 picture named in the room file; each pixel is one cell of the grid the character walks on (cells 10 pixels
   wide). The game copies it into a grid with 8 extra columns on each side so a path search can never run off the edge.
3. It sets `SysMapBlock` to 0, applies the entry record that matches where you came from (palette and, if the entry names a video, starts it;
   video names that start with `T` play full screen), and raises the "room changed" flag.
4. On the next tick the game runs the entry list: the first record whose `From=` room matches (or is 0) and whose condition is true plays its
   sound, shows the subtitle text, and changes variables. Then the mouse hover state is refreshed.

**Checked.** The sequence and the walk-map format were read in the code and the map checked on two real files. 🟡 because the room loader
`1048:2b8e` is only partly read (the sprite-image loading helpers) and the walk-map values 0 and 1 are not decoded.

**For ScummVM.** Do the entry list after the room is built and in the same order; use `FromRoom` to pick the entry; keep the 8-cell border.

## Walking and the walk map 🟡

**What it does.** Clicking on the floor makes the player walk there. The floor is described by a small grid picture per room.

**How it works.**
1. The room's walk map is a 64 by 48 picture; each pixel is a floor cell 10 pixels wide and a few pixels tall (the two numbers on the `WalkMap=` line
   give the top of the grid and the cell height). The game copies it into a wider grid with 8 repeated cells on each side.
2. A cell is **walkable when its number is bigger than the game variable `SysMapBlock`**. The variable is 0 when a room is entered, so
   any number above 0 is floor and 0 is wall. Scripts can raise the variable to close off the areas whose cells have the number 1 (25 of the 84 rooms have such cells).
3. When you click, the click is turned into a grid cell. If the start or the target cell is a wall, the game first finds the nearest floor cell with a small
   fill that spreads left, right, up and down. Then a second fill spreads from the start over the floor until it reaches the target; every cell
   remembers which cell it came from. The route is read back from the target to the start. Cells are kept only where the route has to turn
   (the game checks with a straight-line test whether it can skip ahead), so the player walks in a few straight runs. The player then follows
   this short list point by point (see the game tick). Searches give up after 400 rounds.
4. A straight-line test between two cells checks that every cell between them is floor.

**Checked.** The grid layout, the walkable rule (read in the assembly and consistent with the real maps) and the click conversion are read. ✅ for the click conversion, the walkable rule, the search and the route building (all read instruction by instruction). 🟡 because the signed-compare quirk
at the start cell is not confirmed by a run, and the tick's use of the list is only skimmed.

**For ScummVM.** Use `cell > SysMapBlock` as the walkable test and re-evaluate it whenever the variable changes.

## The game tick 🟡

**What it does.** About 12 times a second (the timer interval is `1000 / frames per second`; the setting comes from the options) Windows
calls one big routine that moves the whole game forward one step. Nothing else runs between steps.

**What one step does, in order** (read from the code; ✅ for the parts marked, the rest is only skimmed):
1. Ignore the call unless it comes from the game's own timer. A flag stops it running twice at once.
2. Keep the sound going (the audio helpers are called every step).
3. While a video plays, only watch it: when Windows says it finished, the game closes the video, sets a flag (room 0x5dd marks a
   special case) and goes on. Nothing else moves during a video.
4. In rooms above 600, when a timer runs out, it plays a random sound effect named `SEnnn` and picks the next delay 12 to 14 seconds away.
5. **Animated things.** For every sprite of the room (the 0x685-byte nodes): if its condition is true and a random number falls
   inside its `Status=` window (second and third numbers, `0 32767` means always), it shows the current frame, plays the effect or speech sound
   when that frame number is reached, then counts: each frame is held for the sixth `Status=` number of steps, then the frame number goes up.
   Reaching the `ChangeAt=` frame applies that list of variable changes. Reaching the last frame applies the `Change=` list and either
   starts again from the start index (flag bit 2) or stays on the last frame. If the picture or position changed, the compositor repaints that
   sprite (`inferred_update_sprite_now`). Sprites flagged for scaling get a fresh scaled copy first.
6. **The player's movement.** The character moves toward the next point of its path, a few pixels per step: the step length depends on how
   far down the screen it stands (clamped to 6..14 pixels) and the direction comes from a small table of angles (a sine table and an
   arctangent table, both read and checked). The facing (0 to 7, in `DS:8e3c`) is chosen from the sign and size of the x and y difference.
   The path is a list of grid cells: cell `c` of a row of N columns is at x = (c mod N) * 10 - 75 and y = (c div N) * H + H/2 + Y0, where
   Y0 and H are the two optional numbers of the room's `WalkMap=` line (the shipped files use for example 200 and 5, so cells are 10 by 5 pixels).
   Every few steps the walking picture advances one frame (a counter from 1 to 8).
7. When the player has arrived and nothing else is going on, the game checks `GoingOut` and `SysReadyExit` to leave the room (calls the room
   change routine) and keeps the standing picture otherwise.
8. **Room 999** is special: the game loads `DS2RUN.HDR` (a 366 by 2320 picture, read once) and scrolls it up two pixels a step. When it
   has scrolled all the way, the game exits. That is almost certainly the end credits.

**Checked.** The animation counting, the walk-grid mapping, the trig tables and the credit scroll were read in the code. 🟡 because the whole
tick is only skimmed: the script and video control, the room-changed handling (`1038:1ade`, `1048:2a50`), the exact step-length formula and the
exact use of each variable are not confirmed.

**For ScummVM.** Keep one fixed step rate; step the player along grid cells of 10 by H pixels with the scale-dependent step length; hold each
animation frame for its sixth `Status=` number of steps.

## Windows services the game relies on ❓

Seen from the list of Windows calls the game makes. None of this is read yet.

| Job | What the game uses | What ScummVM replaces it with |
|---|---|---|
| Window, mouse, keyboard, timers | Windows window procedures and timers | ScummVM's event loop |
| Drawing | WinG (a Windows 3.1 fast-drawing add-on) and palette calls | ScummVM graphics surface and palette |
| Video | The Windows media player (MCI) opens each `.avi` and plays it in a rectangle | ScummVM's AVI decoder |
| Music | The Windows MIDI sequencer, playing `.mid` files from `sndtrack` | ScummVM's MIDI driver |
| Speech and effects | WaveMix (a mixing library): open a wave, play it on a channel | ScummVM's mixer |
| Options and saves | Windows `.INI` files and dialog boxes | ScummVM options and save screens |
| Files and memory | Windows file and memory calls | ScummVM streams and plain allocation |

## Scripts, rooms and conversations ❓

The program's text strings show what the game's scripts look like. Nothing is read yet, but it tells
us the vocabulary.

- **Room files** (`ROOMnnnn.DAT`) have sections for the backdrop, the walkable area, the scale of
  characters, sprites, music, mirrors, palettes, and what happens when you look at, use or walk to
  things.
- **Actions** inside them include changing something, waiting for a condition, playing an effect,
  speaking a line, starting a dialogue, changing the cursor or palette, and destroying an object.
- **Conversation files** have speakers, messages, entries the player can choose, conditions,
  assignments and "fall through" links between entries.
- **Game variables** are kept in a sorted list from `GameVar.IDX`. Some have fixed names the program
  itself uses, such as the last action, where Mike came from, whether Mike is shown, and whether a
  cut-scene is running.

## What is not covered yet

Almost everything in the program. The next clusters to read, in order: the rest of the resource layer,
then the pictures and palette, then the script interpreter (see `clusters.md`).
