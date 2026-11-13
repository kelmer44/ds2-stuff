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
    Glue --> Pics["Pictures, palettes, sprites ❓"]
    Glue --> Speech["Speech and sound ❓"]
    Scripts --> Game["Game loop ❓<br/>click, walk, talk, use things"]
    Pics --> Screen["Drawing ❓<br/>WinG draws into a memory bitmap,<br/>then copies it to the window"]
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
