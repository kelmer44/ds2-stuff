# The text script language of the room and object files

Source of facts: the two keyword tables in the program (`1048:0000` for object files, `1048:0b54` for room files), checked against all
**167** `OBJ_nnnn.DAT` and `ROOMnnnn.DAT` files of the game (84 object files, 83 room files; all in `gl00_scr.000` except
`OBJ_9999.DAT`, the inventory, in `gl00_sys.000`). The meaning column is read from the data and its comments unless it says the code was read.
Status: the **lexers are read**; the section parsers that give the keys their effect are only partly read (see the ledger).

## Line syntax [code]

- One keyed item per line: `Key=value`, any case. A line is cut at the first `;` (comment) and trailing spaces are dropped; leading spaces are
  skipped. The key includes the `=`. A blank line, a line without `=` (such as the `--------------------` separators) or an
  unknown key has code 0 and is ignored.
- Keys are upper-cased before the comparison, so `Cond=`, `COND=` and `cond=` are the same. A misspelling is not accepted: `Chnage=!ShowMike` in
  `OBJ_0307.DAT` (once, line 42) has no effect in the original.
- Blocks: every verb section holds blocks that start with `Cond=` (and optional `Cond2=` lines); the lines after it are the actions of that block.
  A `Cond=` that follows another `Cond=` with no action line in between shows the message "No Info for this Condition!" (object files).

## Object file keys (`1048:0000`) [code]

| Key | Code | Used | Meaning |
|---|---|---|---|
| `COND=` | 1 | 4,655 | condition list (see `STRUCTS.md`, term words) |
| `XYROOM=` | 2 | 3,954 | position and room-change data: four numbers, e.g. `150 310 0 7` (x, y, room, direction or flag; the code clears two flags when the 4th and 5th numbers are not 1) |
| `TEXT=` | 3 | 2,416 | name of a text resource; the code loads `NAME.txt` and keeps its first line |
| `EFFECT=` | 4 | 264 | effect name (string) |
| `SPEECH=` | 5 | 17 | speech resource name |
| `PICTURE=` | 6 | 3 | picture name |
| `ANIM=` | 7 | 1,230 | animation: numbers and a name |
| `CHANGE=` | 8 | 2,254 | assignment list (see term words) |
| `MIDI=` | 0xc | 213 | music name, e.g. `MM001` |
| `DIALOG=` | 0xd | 65 | conversation name |
| `DESTROY=` | 0xe | 0 | marks the action record (sets a flag) |
| `FROM=` | 0xf | 274 | where the player came from: three numbers (x, y, room) |
| `CURSOR=` | 0x10 | 92 | cursor name |
| `SPEECHVAR=` | 0x13 | 246 | assignment list used for speech |
| `PALETTECHANGE=` | 0x14 | 12 | palette name |
| `COND2=` | 0x15 | 461 | second condition list (alternative: either list may be true) |
| `WAITUNTIL=` | 0x19 | 611 | condition list to wait for |
| `CHANGEAT=` | 0x1d | 26 | assignment applied later |
| `ENTRYEND=` | 0x1f | 83 | end of the entry section |
| `GOSTART=`, `GOEND=` | 0x20, 0x21 | 276 each | walk-to section |
| `LOOKSTART=`, `LOOKEND=` | 0x22, 0x23 | 393 each | look-at section |
| `USESTART=`, `USEEND=` | 0x2c, 0x2d | 247 each | use section |
| `NOOBJECTS=` | 0x3f | 84 | number of objects in the file |
| `OBJDESC=` | 0x41 | 619 | object name |
| `OBJXY=` | 0x42 | 618 | hot-spot rectangle: four numbers (left, top, right, bottom) |

## Room file keys (`1048:0b54`) [code]

All the keys above that also appear in this table keep their code (`COND`, `CHANGE`, `ANIM`, `EFFECT`, `DIALOG`, `SPEECH`, `TEXT`, `COND2`, `WAITUNTIL`,
`PICTURE`, `MIDI`, `PALETTECHANGE`, `CHANGEAT`, `ENTRYEND`, `GO*`, `LOOK*`, `USE*`, `NOOBJECTS`, `OBJDESC`, `OBJXY`), plus:

| Key | Code | Used | Meaning |
|---|---|---|---|
| `STATUS=` | 0xb | 1,144 | sprite status: five numbers, e.g. `5 0 32767 0 16` |
| `STARTINDEX=` | 0xa | 2 | first frame index |
| `ENDINDEX=` | 9 | 2 | last frame index |
| `SPRITEIDX=` | 0x12 | 562 | which sprite slot the animation drives |
| `SEQUENCE=` | 0x11 | 849 | list of frame numbers |
| `LOADCOND=` | 0x1a | 27 | condition for loading |
| `LOOPCOND=` | 0x1b | 1 | condition for looping |
| `LOOPPOINT=` | 0x1c | 1 | loop point |
| `POSX=`, `POSY=` | 0x16, 0x17 | 63, 61 | mirror position numbers |
| `SCALEVAL=` | 0x18 | 26 | scale value |
| `ENTRYSTART=` | 0x1e | 83 | entry section start |
| `MUSICSTART=`, `MUSICEND=` | 0x24, 0x25 | 83 each | music section |
| `MIRRORSTART=`, `MIRROREND=` | 0x26, 0x27 | 6 each | mirror section |
| `PALETTESTART=`, `PALETTEEND=` | 0x28, 0x29 | 1 each | palette section |
| `SPRITESTART=`, `SPRITEEND=` | 0x2a, 0x2b | 79 each | sprite section |
| `BACKDROP=` | 0x3c | 83 | backdrop picture name, e.g. `RM0101` |
| `SCALEFACTOR=` | 0x3d | 83 | three numbers, e.g. `110 205 999` (comment in the data: "Mike_Y * sf1 / sf2") |
| `CLIPXY=` | 0x3e | 6 | clip rectangle: four numbers |
| `ROOMDESC=` | 0x40 | 84 | room name |
| `WALKMAP=` | 0x43 | 83 | walk-map resource name, e.g. `RMAP0101` |
| `LOCALVAR=` | 0x44 | 486 | name of a room-local variable |
| `ENDID=` | 99 | 83 | end of the file |

`FROM=`, `XYROOM=`, `CURSOR=` and `DESTROY=` have no code in the room lexer; in the data `From=` and `XYRoom=` appear inside room files only in the entry
section, which is read with the object lexer (`1048:0000`), so both tables are used within one room file. [guess, to be confirmed in the section parsers]

## What the room file sections do [data]

- Header: `BackDrop=`, `WalkMap=`, `ScaleFactor=`, `ObjXY=` (the room's clip rectangle), `LocalVar=` list (names of the room's own variables, prefixed with the
  room number, e.g. `101OpenDoor`).
- `EntryStart` to `EntryEnd`: what happens when the room is entered, by the place you came from (`Cond=Location0101`, `From=x y room`, `XYRoom=`, `Change=`).
- `MusicStart` to `MusicEnd`: which `Midi=` plays under which condition.
- `SpriteStart` to `SpriteEnd`: animated things: `Cond=`, `Anim=name`, `Status=`, `Sequence=`, `SpriteIDX=`, `Change=`.
- `MirrorStart` to `MirrorEnd`: mirror regions (`ClipXY=`, `PosX=`, `PosY=`, `ScaleVal=`).
- After the sprite section the object entries follow (`ObjDesc=`, `ObjXY=`, then `GoStart`, `LookStart` and `UseStart` blocks).

## Fields found in the room section parsers [code]

- `Status=a b c d e [f]`: `a` flags, `b` and `c` (0 and 32767 in the data), `d` the draw list (0 or 1; list 1 is drawn after list 0), `e` the number of frames
  of the animation (at most 128), `f` optional.
- `Sequence=` is a list of frame numbers; without it the sequence is 1, 2, ..., `e`. `StartIndex=` and `EndIndex=` default to 0 and `e - 1`.
- `SpriteIDX=n` selects the shared sprite record: 0 and 1 are the player's two sprites, 2 and 3 are the others used by room objects; a sprite node without it stays unassigned (100).
- `LocalVar=`: at most 20 per room; names start with the room number; they must be listed in ascending order (the lookup relies on it).
- `ScaleFactor=a b c`: only `a` and `b` are used (see the scale rule); `c` is ignored.
- `WalkMap=NAME [n m]`: optional two numbers (default 0 and 10); the shipped files use for example `200 5`.
- `ObjXY=` in a room file is the clip rectangle of the room.

## Entry section keys and number shorthand [code]

- `Entry` records use `From=x y [room]`, `XYRoom=x y [room] [dir] [flag]`, `Text=`, `Effect=`, `Speech=`, `Picture=`, `Dialog=`, `Destroy=`, `PaletteChange=n`, `Anim=x y w h name [flag]`
  (a video: window rectangle and AVI name), `Change=` and `ChangeAt=` assignment lists, `WaitUntil=` (a new record).
- In `PosX=`, `PosY=` and `ScaleVal=` (mirror and sprite number lists) `V(n)` repeats V n times and `V(n d)` makes n values starting at V with step d.
