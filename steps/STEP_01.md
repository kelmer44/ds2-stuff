# Step 1 sheet: a 640 by 480 window (no copy from 2011)

Goal: after this commit the game launches into an empty 640 by 480 window, the console works, and the engine has no leftover sample code.
Files you touch: `engines/darkseed2/darkseed2.cpp`, `darkseed2.h`, `console.cpp`/`.h`. Nothing is copied yet.

## Before you start
- Work on your own branch, not `ds2`. The skeleton in `engines/darkseed2/` is untracked: `git add` it in this commit (or an earlier "skeleton" commit).
- No stale `.o` or `libdarkseed2.a` files are in the folder now, so there is nothing to delete.
- Build with the engine enabled (`--enable-engine=darkseed2`), as you did for the skeleton.

## What to read first (15 minutes)
1. 2011 `darkseed2.cpp`, function `DarkSeed2Engine::initGraphics` (about line 317): it asks for 640 by 480 with an RGB565 pixel format, `PixelFormat(2, 5, 6, 5, 0, 11, 5, 0, 0)`.
2. Current `engines/util.h`: the overloads of `initGraphics(width, height, const PixelFormat *format)`.
3. Current skeleton `DarkSeed2Engine::run()`: the sample loop (boxes, cycling palette) is the part to delete.

## Changes
1. In `run()` replace `initGraphics(320, 200)` by a 640 by 480 call with the RGB565 format. Keep it in a small member function (`initGraphicsMode()`) so step 6 can change it in one place if you pick 8 bits (decision D1).
2. Create the screen with `new Graphics::Screen(640, 480, format)` (the 3-argument constructor exists). Use the same format object for both calls so they cannot disagree. Delete the old `Graphics::Screen()` line.
3. Delete the box drawing and the palette cycling. Keep: the save-slot check, `setDebugger(new Console())`, the event loop and the frame limiter. With a 16-bit screen `g_system->getPaletteManager()` is not used, so the palette code goes too.
4. Clear the screen to black once (`_screen->clear()`) and call `update()` each frame.
5. In the event loop handle nothing yet except letting the loop poll events (the console key `~` is handled by the engine base class).
6. Remove the dummy `syncGame` field (`dummy`) only if you want; it is harmless and step 21 replaces it.
7. Keep `console.cpp`'s `test` command for now; step 2 adds the first real one.

## Pitfalls
- The format must be passed to `initGraphics` as a pointer; if the backend cannot do RGB565 ScummVM chooses another, so afterwards read `g_system->getScreenFormat()` and build the screen from that, not from the format you asked for.
- A 640 by 480 mode may be scaled by the backend; do not draw outside the 640 by 480 area.
- `Graphics::Screen::update()` only pushes dirty rectangles; `clear()` marks all dirty, so the first frame appears.

## Test
1. Launch Dark Seed II from the launcher: black 640 by 480 window, no flicker, ESC or close exits cleanly.
2. Press `~` (or Ctrl+Alt+D): the console opens; `test` prints `Test`.
3. Build log has no warnings from `engines/darkseed2`.

## What you learn
`Engine::run`, graphics mode and pixel format setup, the engine's debugger console, how the frame limiter and event polling fit together.

## Commit idea (yours to write)
One subject: the window works and the sample code is gone. Keep the 2011 credit work for step 2, when the first file is copied.

---

Next sheet: step 3 (resource archives) is the largest early step. Say so and I will prepare it, including the table of 2011 `SearchMan` calls that no longer exist.
