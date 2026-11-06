# Clusters: first map of DARK0001.EXE (6 November 2026)

First draft from imports used per segment, the strings each function references and the source
names the game leaves in its error messages. Every row is a **hypothesis** until a function in it
has a contract. Segment `NNNN` is the selector (NE segment N is `0x1000 + 8*(N-1)`).

## Evidence from strings

The EXE carries its own source and function names in messages. They are not part of the engine
design, only a guide for naming clusters.

| String | Reading |
|---|---|
| `gluefile.c`, `load_glue_file`, `load_file`, `read_file_to`, `gl00load_palette`, "Error reading glue file" | Resource layer in a C module `gluefile.c` |
| `load_image`, `load_mask`, `process_image`, `np_process_image`, `load_windows_palette`, `set_windows_palette` | Image and palette loading, then WinG bitmap creation |
| `talk.c`, `EntrySelected`, `GetCondInfo`, `SysTalking%d`, `ds2dialog` | Conversation engine |
| `DIRECTORY` + `dark0001.exe`, `gfile.hdr`, `.\DARKSEED.INI`, `GameVar.IDX`, `ROOM%04d.DAT`, `fix.pal` | Startup, file layout, game variables, room files |
| `CHANGE=`, `WAITUNTIL=`, `EFFECT=`, `SPEECH=`, `SPEECHVAR=`, `DIALOG=`, `CURSOR=`, `DESTROY=`, `GOSTART=`, `PALETTECHANGE=`, `PICTURE=`, `CHANGEAT=` | Script-action keywords (the interpreter's vocabulary) |
| `ENTRYSTART=`, `LOOKSTART=`, `USESTART=`, `MUSICSTART=`, `MIRRORSTART=`, `SPRITESTART=`, `BACKDROP=`, `SCALEFACTOR=`, `WALKMAP=`, `ROOMDESC=`, `LOCALVAR=` | Room file section keywords |
| `SPEAKER`, `MESSAGE`, `CONVERSATION`, `DECLARE`, `IMPORT`, `FALLTHROUGH`, `ENTRY`, `UNHIDE`, `ASSIGN`, `DESTROY`, `MESSAGESTOP`, `INITIAL`, `PERSIST` | Conversation script keywords |
| `SysCutScene`, `SysCall`, `SysCall2`, `LastAction`, `GoingOut`, `ShowMike`, `EraseMike`, `SysReadyExit`, `SysRandom`, `SysMapBlock`, `FromRoom`, `HaveBioGun`, `UsingNothing`, `cUseIt`, `cHand`, `cLook`, `cLookAt` | Names of built-in game variables and cursor names |
| `play vfw ...`, `OPEN avivideo!`, `stop midifile`, `.mid alias midifile`, `waveaudio`, `sequencer` | MCI command strings (video and MIDI) |
| `WinG can't allocate enough memory`, `Sprite list is full.`, `Too many frames in one animation!`, `Too many timers` | Graphics, sprite and animation limits |
| `Saved%02d`, `SAVEGAME`, `ds2SAVEGAME`, `ds2LOADGAME`, "Saved Game from other Version!" | Save and load dialogs, saved-game version check |

The interface strings are Spanish (the EXE is the Spanish build, window title "Dark Seed II"), while
`FINDINGS.md` calls our copy English. The data files carry the language; check that when the
resource layer is read.

## Clusters by segment (draft)

| Cluster | Segments | Basis | Phase |
|---|---|---|---|
| Startup and C runtime | `10d0` (55 fns, entry `10d0:001a`), `10d8`, `10c0`, `10b0`, `10a0` | Entry, `DOS3CALL`, `LOCKSEGMENT`, fatal-exit messages, stdio-like helpers | 0, replaced |
| Main window, input, timers | `1000` (WINPROC, POPUPPROC), `1008`, `1040` | `GETDC`, `POSTMESSAGE`, `SETCURSORPOS`, `SETWINDOWPOS`, `MCISENDSTRING` | 4 |
| Dialogs (options, about, play set, load/save, inventory dialog) | `1010`, `1018`, `1060`, `1068` | `DIALOGBOX`, `ENDDIALOG`, `GETDLGITEM`, `CHECKRADIOBUTTON`, `_WSPRINTF`, strings "Saved%02d", "Options" | 7, mostly `replaced` |
| INI and options | `1030` | `GETPRIVATEPROFILE*`, `WRITEPRIVATEPROFILESTRING`, "Options" keys (PlayWave, PlayMidi, SkipTrans, AVImode, ReadSpeed, MidiType, DialogOpt) | 7 |
| Resource layer (glue files, GFILE.HDR) | `1028` (`1028:09f6` reads the header and builds the table), `1038` (`1038:0000`), `1088`, `1090`, `1098` (`1098:0326`, `1098:029e`) | `_LOPEN`/`_LREAD`/`_LLSEEK`/`_HREAD`/`OPENFILE`, selector and global memory, `gluefile.c` | 1 |
| Graphics, palette, sprites | `1008`, `1038`, `1048`, `1078`, `1080` | WinG ordinals 1001 to 1010, `CREATEDIBITMAP`, palette calls, `HMEMCPY` | 2 |
| 32-bit bitmap helpers | `10b8`, `10c8` | `int 31h` DPMI, 32-bit operands, bit-depth dispatch | 2 (by hand) |
| Text and fonts | `1058`, `1098` | `TEXTOUT`, `DRAWTEXT`, `SETBKMODE`, `SETTEXTCOLOR`, `CREATEFONT` | 2 |
| Script and variable interpreter | `1048`, `1060`, `1068`, `1070` (to be split) | `LSTRCMPI`, `LSTRCPY` and the keyword strings | 3 |
| Room, objects, cursors, inventory | `1050`, `1058`, `1068`, `1078` | cursor names, `LOADCURSOR`, room keywords | 4 |
| Talk (conversations) | part of `1068`, `1070` | `talk.c`, `ds2dialog`, conversation keywords | 5 |
| Video (MCI AVI) and music (MCI MIDI) | `10a8`, `1000`, `1048` | `MCISENDSTRING`, `MCIGETDEVICEID`, `mciSendCommand` ordinals, `MIDIOUTSETVOLUME` | 6 |
| Wave audio (WAVMIX16) | `10a8` | WAVMIX16 ordinals 4 to 15 | 6 |
| Saves | `1018`, `1060` | `SAVEGAMEPROC`, `LOADGAMEPROC`, "ds2SAVEGAME" | 7 |

Segment membership is a first guess. Sizes follow the code-segment list in `export/segments.tsv`.
Refine it with call-graph communities and string references once the ledger carries callee edges
that include indirect calls.

## Tooling gap (closed 6 November 2026)

Win16 imports are now typed (see `re/README.md`), so call arguments decompile in the right order and
width. Remaining oddities: huge-pointer arithmetic (`__AHINCR`, the `0x8000` chunked reads) still
shows as `CONCAT22` and loops over selector steps; treat those as "buffer larger than 64 KB".
The live GhidraMCP `set_function_prototype` endpoint still fails; use the scripts for bulk typing and
the bridge only for reading and renaming.
