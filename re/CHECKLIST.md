# Function checklist

Generated from `ledger.json` by `tools/make_checklist.py`; update through `tools/mark.py`, never by hand.
`[x]` means **done: status understood or later and the contract is complete** (every required field filled, Subsystems doc and Checklist boxes ticked; rules in `tools/docs_gate.py`). A function without documentation stays `[ ]` whatever its status. Status ladder: untouched < decompiled < understood < ported < emu-compared < original-compared; pure Windows glue is `replaced`.

## Overall (356 functions)

| Stage | Count | Share |
|---|---|---|
| decompiled or later (status only) | 84 | 23% |
| understood or later (status only) | 77 | 21% |
| ported or later (status only) | 8 | 2% |
| emu-compared or later (status only) | 8 | 2% |
| original-compared or later (status only) | 8 | 2% |
| replaced by a ScummVM service | 8 | |
| **done (status understood or later and documented)** | **77** | **21%** |
| status ahead of its documentation | 0 | |

## By cluster

### 32-bit bitmap helpers (3/10 done)

- [x] `10b8:0024` inferred_blit_rows_keyed · depth 0 · 165 bytes · **understood**
- [x] `10b8:0104` inferred_blit_spans_keyed · depth 0 · 242 bytes · **understood**
- [x] `10b8:0254` inferred_blit_rows_copy · depth 0 · 130 bytes · **understood**
- [ ] `10b8:02b2` FUN_10b8_02b2 · depth 0 · 146 bytes · **untouched**
- [ ] `10c8:0073` FUN_10c8_0073 · depth 0 · 139 bytes · **untouched**
- [ ] `10c8:00fe` FUN_10c8_00fe · depth 0 · 2 bytes · **untouched**
- [ ] `10c8:054e` FUN_10c8_054e · depth 0 · 73 bytes · **untouched**
- [ ] `10c8:059a` FUN_10c8_059a · depth 0 · 76 bytes · **untouched**
- [ ] `10c8:0040` FUN_10c8_0040 · depth 1 · 87 bytes · **untouched**
- [ ] `10c8:0100` FUN_10c8_0100 · depth 1 · 291 bytes · **untouched**

### audio and video (MCI, WaveMix) (0/23 done)

- [ ] `10a8:0246` FUN_10a8_0246 · depth 6 · 69 bytes · **untouched**
- [ ] `10a8:028e` FUN_10a8_028e · depth 6 · 82 bytes · **untouched**
- [ ] `10a8:02e2` FUN_10a8_02e2 · depth 6 · 110 bytes · **untouched**
- [ ] `10a8:09f4` FUN_10a8_09f4 · depth 6 · 42 bytes · **untouched**
- [ ] `10a8:0c72` FUN_10a8_0c72 · depth 6 · 165 bytes · **untouched**
- [ ] `10a8:0d1a` FUN_10a8_0d1a · depth 6 · 67 bytes · **untouched**
- [ ] `10a8:0000` FUN_10a8_0000 · depth 7 · 66 bytes · **untouched**
- [ ] `10a8:01e8` FUN_10a8_01e8 · depth 7 · 93 bytes · **untouched**
- [ ] `10a8:0350` FUN_10a8_0350 · depth 7 · 146 bytes · **untouched**
- [ ] `10a8:0980` FUN_10a8_0980 · depth 7 · 116 bytes · **untouched**
- [ ] `10a8:00e2` FUN_10a8_00e2 · depth 8 · 122 bytes · **untouched**
- [ ] `10a8:03e2` FUN_10a8_03e2 · depth 8 · 100 bytes · **untouched**
- [ ] `10a8:0a1e` FUN_10a8_0a1e · depth 8 · 352 bytes · **untouched**
- [ ] `10a8:0b7e` FUN_10a8_0b7e · depth 8 · 63 bytes · **untouched**
- [ ] `10a8:0bbe` FUN_10a8_0bbe · depth 8 · 179 bytes · **untouched**
- [ ] `10a8:0446` FUN_10a8_0446 · depth 16 · 306 bytes · **untouched**
- [ ] `10a8:015e` FUN_10a8_015e · depth 17 · 138 bytes · **untouched**
- [ ] `10a8:07dc` FUN_10a8_07dc · depth 18 · 419 bytes · **untouched**
- [ ] `10a8:0042` FUN_10a8_0042 · depth 19 · 79 bytes · **untouched**
- [ ] `10a8:0092` FUN_10a8_0092 · depth 19 · 79 bytes · **untouched**
- [ ] `10a8:057a` FUN_10a8_057a · depth 19 · 190 bytes · **untouched**
- [ ] `10a8:0638` FUN_10a8_0638 · depth 19 · 193 bytes · **untouched**
- [ ] `10a8:06fa` FUN_10a8_06fa · depth 19 · 224 bytes · **untouched**

### dialogs (0/13 done)

- [ ] `1010:0000` FUN_1010_0000 · depth 6 · 165 bytes · **untouched**
- [ ] `1010:00a6` FUN_1010_00a6 · depth 6 · 120 bytes · **untouched**
- [ ] `1010:0336` FUN_1010_0336 · depth 6 · 89 bytes · **untouched**
- [ ] `1010:08a2` ABOUT_DLG_PROC · depth 6 · 105 bytes · **untouched**
- [ ] `1010:0938` FUN_1010_0938 · depth 6 · 223 bytes · **untouched**
- [ ] `1010:0b72` FUN_1010_0b72 · depth 6 · 76 bytes · **untouched**
- [ ] `1010:0794` FUN_1010_0794 · depth 7 · 50 bytes · **untouched**
- [ ] `1010:0a44` FUN_1010_0a44 · depth 7 · 156 bytes · **untouched**
- [ ] `1010:0ae0` FUN_1010_0ae0 · depth 7 · 145 bytes · **untouched**
- [ ] `1010:0230` FUN_1010_0230 · depth 9 · 260 bytes · **untouched**
- [ ] `1010:0390` PLAYSET_DLG_PROC · depth 9 · 965 bytes · **untouched**
- [ ] `1010:07c6` FUN_1010_07c6 · depth 10 · 220 bytes · **untouched**
- [ ] `1010:011e` FUN_1010_011e · depth 20 · 272 bytes · **untouched**

### dialogs and options (0/11 done)

- [ ] `1060:00fc` FUN_1060_00fc · depth 6 · 138 bytes · **untouched**
- [ ] `1060:0188` FUN_1060_0188 · depth 6 · 152 bytes · **untouched**
- [ ] `1060:0378` FUN_1060_0378 · depth 6 · 274 bytes · **untouched**
- [ ] `1060:048e` FUN_1060_048e · depth 6 · 194 bytes · **untouched**
- [ ] `1060:0554` FUN_1060_0554 · depth 6 · 251 bytes · **untouched**
- [ ] `1060:0d2e` FUN_1060_0d2e · depth 6 · 490 bytes · **untouched**
- [ ] `1060:0f1c` FUN_1060_0f1c · depth 6 · 290 bytes · **untouched**
- [ ] `1060:1182` FUN_1060_1182 · depth 6 · 93 bytes · **untouched**
- [ ] `1060:11e0` FUN_1060_11e0 · depth 6 · 170 bytes · **untouched**
- [ ] `1060:0b62` FUN_1060_0b62 · depth 8 · 226 bytes · **untouched**
- [ ] `1060:128a` VAR_CHECKER_PROC · depth 8 · 399 bytes · **untouched**

### dialogs and saves (0/7 done)

- [ ] `1018:0566` FUN_1018_0566 · depth 6 · 89 bytes · **untouched**
- [ ] `1018:05c0` FUN_1018_05c0 · depth 6 · 136 bytes · **untouched**
- [ ] `1018:0000` LOADGAMEPROC · depth 7 · 459 bytes · **untouched**
- [ ] `1018:09ce` FUN_1018_09ce · depth 8 · 630 bytes · **untouched**
- [ ] `1018:0278` SAVEGAMEPROC · depth 9 · 702 bytes · **untouched**
- [ ] `1018:0648` FUN_1018_0648 · depth 21 · 900 bytes · **untouched**
- [ ] `1018:01fa` FUN_1018_01fa · depth 22 · 126 bytes · **untouched**

### dialogs and script (0/28 done)

- [ ] `1068:1654` FUN_1068_1654 · depth 6 · 61 bytes · **untouched**
- [ ] `1068:19ea` FUN_1068_19ea · depth 6 · 138 bytes · **untouched**
- [ ] `1068:1d60` FUN_1068_1d60 · depth 6 · 107 bytes · **untouched**
- [ ] `1068:30a6` FUN_1068_30a6 · depth 6 · 132 bytes · **untouched**
- [ ] `1068:312a` FUN_1068_312a · depth 6 · 124 bytes · **untouched**
- [ ] `1068:3280` FUN_1068_3280 · depth 6 · 60 bytes · **untouched**
- [ ] `1068:0edc` FUN_1068_0edc · depth 7 · 334 bytes · **untouched**
- [ ] `1068:15b8` FUN_1068_15b8 · depth 7 · 154 bytes · **untouched**
- [ ] `1068:1692` FUN_1068_1692 · depth 7 · 839 bytes · **untouched**
- [ ] `1068:2074` FUN_1068_2074 · depth 7 · 103 bytes · **untouched**
- [ ] `1068:20dc` FUN_1068_20dc · depth 7 · 103 bytes · **untouched**
- [ ] `1068:237a` FUN_1068_237a · depth 7 · 158 bytes · **untouched**
- [ ] `1068:2d64` FUN_1068_2d64 · depth 7 · 833 bytes · **untouched**
- [ ] `1068:0000` FUN_1068_0000 · depth 8 · 108 bytes · **untouched**
- [ ] `1068:1030` FUN_1068_1030 · depth 8 · 422 bytes · **untouched**
- [ ] `1068:1dcc` FUN_1068_1dcc · depth 8 · 69 bytes · **untouched**
- [ ] `1068:2144` FUN_1068_2144 · depth 8 · 566 bytes · **untouched**
- [ ] `1068:31a6` FUN_1068_31a6 · depth 8 · 218 bytes · **untouched**
- [ ] `1068:1e12` FUN_1068_1e12 · depth 9 · 234 bytes · **untouched**
- [ ] `1068:1efe` FUN_1068_1efe · depth 10 · 357 bytes · **untouched**
- [ ] `1068:1a74` FUN_1068_1a74 · depth 16 · 249 bytes · **untouched**
- [ ] `1068:1c6c` FUN_1068_1c6c · depth 16 · 242 bytes · **untouched**
- [ ] `1068:1b6e` FUN_1068_1b6e · depth 17 · 253 bytes · **untouched**
- [ ] `1068:2418` FUN_1068_2418 · depth 18 · 885 bytes · **untouched**
- [ ] `1068:27a8` FUN_1068_27a8 · depth 19 · 709 bytes · **untouched**
- [ ] `1068:11da` FUN_1068_11da · depth 20 · 987 bytes · **untouched**
- [ ] `1068:2a72` FUN_1068_2a72 · depth 20 · 750 bytes · **untouched**
- [ ] `1068:006c` DIALOGPROC · depth 21 · 3637 bytes · **untouched**

### game tick (0/1 done)

- [ ] `1038:086e` inferred_game_tick · depth 21 · 4706 bytes · **decompiled** — WM_TIMER handler called from WINPROC every timer tick with the window message words; the main per-tick update (animation frames, SEQUENCE=, SPEECH=, CHANGEAT=, AVI control, GoingOut, SysReadyExit); not read

### game variables (15/15 done)

- [x] `1060:0000` inferred_uppercase · depth 6 · 98 bytes · **understood**
- [x] `1060:0062` inferred_next_identifier · depth 6 · 152 bytes · **understood**
- [x] `1060:0222` inferred_next_token · depth 6 · 152 bytes · **understood**
- [x] `1060:0846` inferred_test_terms · depth 6 · 210 bytes · **understood**
- [x] `1060:092e` inferred_apply_terms · depth 6 · 200 bytes · **understood**
- [x] `1060:0c44` inferred_parse_numbers · depth 6 · 232 bytes · **understood**
- [x] `1060:02bc` inferred_find_var · depth 7 · 184 bytes · **understood**
- [x] `1060:07a8` inferred_free_term_list · depth 7 · 77 bytes · **understood**
- [x] `1060:07f6` inferred_test_any · depth 7 · 78 bytes · **understood**
- [x] `1060:1040` inferred_read_idx_line · depth 7 · 121 bytes · **understood**
- [x] `1060:0652` inferred_parse_terms · depth 8 · 337 bytes · **understood**
- [x] `1060:0a0a` inferred_apply_terms_for_var · depth 8 · 226 bytes · **understood**
- [x] `1060:0b00` inferred_get_var · depth 8 · 37 bytes · **understood**
- [x] `1060:0b26` inferred_set_var · depth 8 · 58 bytes · **understood**
- [x] `1060:10ba` inferred_load_game_vars · depth 16 · 199 bytes · **understood**

### graphics and bitmaps (0/3 done)

- [ ] `1038:01a4` FUN_1038_01a4 · depth 7 · 63 bytes · **untouched**
- [ ] `1038:0000` FUN_1038_0000 · depth 9 · 419 bytes · **untouched**
- [ ] `1038:1ade` FUN_1038_1ade · depth 20 · 2767 bytes · **untouched**

### graphics and palette (20/26 done)

- [x] `1080:0000` inferred_copy_string · depth 6 · 67 bytes · **replaced** — ScummVM: Common::String
- [x] `1080:0044` inferred_append_string · depth 6 · 91 bytes · **replaced** — ScummVM: Common::String
- [x] `1080:00a0` inferred_vga6_to_8bit · depth 6 · 34 bytes · **understood**
- [x] `1080:00c2` inferred_delete_game_palette · depth 6 · 44 bytes · **replaced** — Windows resource cleanup
- [ ] `1080:02f0` FUN_1080_02f0 · depth 6 · 154 bytes · **untouched**
- [ ] `1080:038a` FUN_1080_038a · depth 6 · 143 bytes · **untouched**
- [ ] `1080:041a` FUN_1080_041a · depth 6 · 128 bytes · **untouched**
- [x] `1080:062a` inferred_delete_object_20d0 · depth 6 · 38 bytes · **replaced** — Windows resource cleanup
- [x] `1080:0920` inferred_unrealize_palette · depth 6 · 105 bytes · **replaced** — ScummVM: palette set directly
- [x] `1080:098a` inferred_realize_palette · depth 6 · 110 bytes · **replaced** — ScummVM: palette set directly
- [x] `1080:0ad6` inferred_read_image_header · depth 6 · 90 bytes · **understood**
- [x] `1080:0cc8` inferred_blit_bitmap_plain · depth 6 · 108 bytes · **understood**
- [x] `1080:0d34` inferred_random_below · depth 6 · 34 bytes · **understood**
- [x] `1080:06f8` inferred_free_block · depth 7 · 33 bytes · **understood**
- [x] `1080:07a0` inferred_free_image · depth 7 · 95 bytes · **understood**
- [x] `1080:0d56` inferred_draw_image_record · depth 7 · 148 bytes · **understood**
- [x] `1080:00ee` inferred_set_windows_palette · depth 8 · 239 bytes · **understood**
- [ ] `1080:01de` FUN_1080_01de · depth 8 · 274 bytes · **untouched**
- [x] `1080:049a` inferred_make_bmp_palette · depth 8 · 400 bytes · **understood**
- [ ] `1080:09f8` FUN_1080_09f8 · depth 8 · 220 bytes · **untouched**
- [ ] `1080:0b30` FUN_1080_0b30 · depth 8 · 175 bytes · **untouched**
- [x] `1080:0be0` inferred_make_bitmap_rgb · depth 8 · 231 bytes · **understood**
- [x] `1080:0650` inferred_load_palette_into_dc · depth 16 · 168 bytes · **understood**
- [x] `1080:071a` inferred_load_palette_file · depth 16 · 133 bytes · **understood**
- [x] `1080:0800` inferred_load_mask · depth 16 · 143 bytes · **understood**
- [x] `1080:0890` inferred_load_image · depth 16 · 143 bytes · **understood**

### graphics and sprites (20/26 done)

- [ ] `1078:00ca` FUN_1078_00ca · depth 6 · 60 bytes · **untouched**
- [ ] `1078:0106` FUN_1078_0106 · depth 6 · 107 bytes · **untouched**
- [ ] `1078:043e` FUN_1078_043e · depth 6 · 22 bytes · **untouched**
- [x] `1078:05be` inferred_sort_sprite_list · depth 6 · 309 bytes · **understood**
- [x] `1078:0806` inferred_remove_sprite · depth 6 · 184 bytes · **understood**
- [x] `10b0:0000` inferred_draw_bitmap_clipped · depth 6 · 764 bytes · **understood**
- [x] `1070:0136` inferred_image_cache_release · depth 7 · 227 bytes · **understood**
- [x] `1078:0000` inferred_draw_debug_text · depth 7 · 202 bytes · **understood**
- [ ] `1078:03be` FUN_1078_03be · depth 7 · 127 bytes · **untouched**
- [x] `1078:08c0` inferred_add_sprite · depth 7 · 315 bytes · **understood**
- [x] `1078:1aea` inferred_draw_image_to_buffer · depth 7 · 130 bytes · **understood**
- [x] `1078:1b6c` inferred_draw_image_rect · depth 7 · 120 bytes · **understood**
- [x] `1078:0172` inferred_begin_rect_buffer · depth 8 · 585 bytes · **understood**
- [x] `1078:0454` inferred_draw_sprite · depth 8 · 362 bytes · **understood**
- [x] `1078:18d8` inferred_update_sprite · depth 8 · 528 bytes · **understood**
- [x] `1078:06f4` inferred_draw_sprite_lists · depth 9 · 274 bytes · **understood**
- [x] `1078:0a00` inferred_erase_sprite_rect · depth 10 · 398 bytes · **understood**
- [x] `1078:0b8e` inferred_first_draw_sprite_rect · depth 10 · 465 bytes · **understood**
- [x] `1078:1238` inferred_repaint_window_rect · depth 10 · 1370 bytes · **understood**
- [x] `1078:1796` inferred_redraw_rect · depth 10 · 321 bytes · **understood** — compositor: redraws a dirty rect of the scene (background image, objects, StretchBlt); partly read
- [x] `1078:0d60` inferred_update_sprite_now · depth 11 · 718 bytes · **understood**
- [x] `1078:1030` inferred_update_sprite_in_rect · depth 11 · 518 bytes · **understood** — compositor: moves an object, redraws dirty rect (background, objects), StretchBlts to screen; sets object position = image offsets (a,b) + object anchor; partly read
- [ ] `10c0:0000` inferred_stretch_dib · depth 13 · 600 bytes · **decompiled** — wrapper of the 'stretch.c' stretch library (asserts on null pointers and unequal bit depth, clips to the destination, calls 10c8:0040); the resampling in 10c8 is unread
- [x] `1020:0656` inferred_scale_image · depth 14 · 953 bytes · **understood**
- [ ] `1038:01e4` inferred_update_room_sprites · depth 15 · 1671 bytes · **decompiled** — updates every room object's sprite and Mike's two sprites (scales images with 1020:0656, registers changes with 1078:18d8), then repaints with 1078:1796; partly read
- [x] `1070:0000` inferred_image_cache_get · depth 17 · 307 bytes · **understood**

### main window and input (0/24 done)

- [ ] `1000:0000` FUN_1000_0000 · depth 6 · 51 bytes · **untouched**
- [ ] `1000:1016` POPUPPROC · depth 6 · 605 bytes · **untouched**
- [ ] `1000:1a98` FUN_1000_1a98 · depth 6 · 115 bytes · **untouched**
- [ ] `1008:00b6` FUN_1008_00b6 · depth 6 · 31 bytes · **untouched**
- [ ] `1008:0f86` FUN_1008_0f86 · depth 6 · 309 bytes · **untouched**
- [ ] `1040:0000` FUN_1040_0000 · depth 6 · 280 bytes · **untouched**
- [ ] `1000:1b0e` FUN_1000_1b0e · depth 7 · 290 bytes · **untouched**
- [ ] `1000:1d1a` FUN_1000_1d1a · depth 7 · 187 bytes · **untouched**
- [ ] `1000:1c36` FUN_1000_1c36 · depth 8 · 226 bytes · **untouched**
- [ ] `1008:00d6` FUN_1008_00d6 · depth 8 · 224 bytes · **untouched**
- [ ] `1008:01b8` FUN_1008_01b8 · depth 8 · 232 bytes · **untouched**
- [ ] `1008:02a2` FUN_1008_02a2 · depth 8 · 389 bytes · **untouched**
- [ ] `1008:0a58` FUN_1008_0a58 · depth 8 · 158 bytes · **untouched**
- [ ] `1008:0000` FUN_1008_0000 · depth 9 · 75 bytes · **untouched**
- [ ] `1008:004c` FUN_1008_004c · depth 9 · 104 bytes · **untouched**
- [ ] `1008:0e16` FUN_1008_0e16 · depth 9 · 182 bytes · **untouched**
- [ ] `1008:0ece` FUN_1008_0ece · depth 9 · 182 bytes · **untouched**
- [ ] `1040:011a` FUN_1040_011a · depth 9 · 1860 bytes · **untouched**
- [ ] `1000:19f2` FUN_1000_19f2 · depth 17 · 166 bytes · **untouched**
- [ ] `1008:0af6` FUN_1008_0af6 · depth 17 · 800 bytes · **untouched**
- [ ] `1000:0034` FUN_1000_0034 · depth 22 · 513 bytes · **untouched**
- [ ] `1000:12be` FUN_1000_12be · depth 23 · 1829 bytes · **untouched**
- [ ] `1000:0236` WINPROC · depth 24 · 3482 bytes · **untouched**
- [ ] `1008:0428` DLG_INVENTORY · depth 24 · 1524 bytes · **untouched**

### options (INI) (0/3 done)

- [ ] `1030:0000` FUN_1030_0000 · depth 6 · 62 bytes · **untouched**
- [ ] `1030:003e` FUN_1030_003e · depth 6 · 43 bytes · **untouched**
- [ ] `1030:006a` FUN_1030_006a · depth 6 · 42 bytes · **untouched**

### resource (4/4 done)

- [x] `10b8:0368` inferred_lz_decompress_block · depth 0 · 129 bytes · **understood** — contract 10b8_0368; Ghidra mis-decodes (USE32 segment)
- [x] `1090:0068` inferred_mem_free · depth 6 · 76 bytes · **understood** — GlobalHandle/Unlock/Free wrapper
- [x] `1090:0000` inferred_mem_alloc · depth 7 · 102 bytes · **understood** — GlobalAlloc+Lock wrapper
- [x] `1028:09f6` inferred_load_gfile_hdr · depth 8 · 336 bytes · **understood** — contract 1028_09f6

### resource layer (14/29 done)

- [x] `10d0:03f4` inferred_dos_findfirst · depth 2 · 122 bytes · **replaced** — ScummVM: Common::File::exists
- [ ] `1028:0000` FUN_1028_0000 · depth 6 · 124 bytes · **untouched**
- [ ] `1028:007e` FUN_1028_007e · depth 6 · 56 bytes · **untouched**
- [ ] `1028:00b6` FUN_1028_00b6 · depth 6 · 151 bytes · **untouched**
- [ ] `1028:014e` FUN_1028_014e · depth 6 · 155 bytes · **untouched**
- [ ] `1028:090e` FUN_1028_090e · depth 6 · 85 bytes · **untouched**
- [ ] `1028:0964` FUN_1028_0964 · depth 6 · 81 bytes · **untouched**
- [ ] `1028:09b6` FUN_1028_09b6 · depth 6 · 63 bytes · **untouched**
- [ ] `1028:0b48` FUN_1028_0b48 · depth 6 · 92 bytes · **untouched**
- [x] `1030:0094` inferred_read_ini_string · depth 6 · 50 bytes · **understood**
- [ ] `1088:0350` FUN_1088_0350 · depth 6 · 85 bytes · **untouched**
- [x] `1088:04c8` inferred_normalize_name · depth 6 · 83 bytes · **understood**
- [ ] `1088:0966` FUN_1088_0966 · depth 6 · 31 bytes · **untouched**
- [ ] `1088:0986` FUN_1088_0986 · depth 6 · 31 bytes · **untouched**
- [x] `1098:0248` inferred_message_box · depth 6 · 44 bytes · **understood**
- [x] `1098:029e` inferred_read_huge · depth 6 · 134 bytes · **understood**
- [x] `10d8:0052` inferred_compare_name12 · depth 6 · 97 bytes · **understood**
- [ ] `1088:02ac` FUN_1088_02ac · depth 7 · 161 bytes · **untouched**
- [ ] `1088:03a6` FUN_1088_03a6 · depth 7 · 290 bytes · **untouched**
- [x] `1088:051c` inferred_find_entry · depth 7 · 267 bytes · **understood**
- [ ] `1088:09a6` FUN_1088_09a6 · depth 7 · 52 bytes · **untouched**
- [x] `1098:0000` inferred_report_error · depth 7 · 123 bytes · **understood**
- [ ] `1028:01ea` FUN_1028_01ea · depth 8 · 485 bytes · **untouched**
- [x] `1088:0000` inferred_read_file_to · depth 8 · 61 bytes · **understood** — wrapper for 1098:029e with error
- [x] `1088:0892` inferred_get_file_size · depth 8 · 210 bytes · **understood** — size of a resource by name
- [x] `1088:003e` inferred_load_glue_file · depth 10 · 620 bytes · **understood** — loads and LZ-decodes a whole glue file; read at asm level only in part
- [x] `1088:062c` inferred_make_alias_selector · depth 13 · 135 bytes · **understood**
- [x] `1088:06b4` inferred_load_file · depth 14 · 474 bytes · **understood** — load resource by name; copies 22-byte entry record
- [x] `1098:0326` inferred_load_file_or_plain · depth 15 · 277 bytes · **understood**

### resource layer and errors (0/5 done)

- [ ] `1098:007c` FUN_1098_007c · depth 6 · 139 bytes · **untouched**
- [ ] `1098:0108` FUN_1098_0108 · depth 6 · 137 bytes · **untouched**
- [ ] `1098:0192` FUN_1098_0192 · depth 6 · 48 bytes · **untouched**
- [ ] `1098:01c2` FUN_1098_01c2 · depth 6 · 134 bytes · **untouched**
- [ ] `1098:0274` FUN_1098_0274 · depth 6 · 42 bytes · **untouched**

### rooms and cursors (0/6 done)

- [ ] `1050:011a` FUN_1050_011a · depth 6 · 39 bytes · **untouched**
- [ ] `1050:0142` FUN_1050_0142 · depth 7 · 410 bytes · **untouched**
- [ ] `1050:0000` FUN_1050_0000 · depth 8 · 97 bytes · **untouched**
- [ ] `1050:02de` FUN_1050_02de · depth 8 · 123 bytes · **untouched**
- [ ] `1050:0062` FUN_1050_0062 · depth 9 · 184 bytes · **untouched**
- [ ] `1050:035a` FUN_1050_035a · depth 9 · 518 bytes · **untouched**

### script and rooms (0/16 done)

- [ ] `1048:03c4` FUN_1048_03c4 · depth 6 · 104 bytes · **untouched**
- [ ] `1048:0000` FUN_1048_0000 · depth 7 · 940 bytes · **untouched**
- [ ] `1048:0b54` FUN_1048_0b54 · depth 7 · 1480 bytes · **untouched**
- [ ] `1048:21b0` FUN_1048_21b0 · depth 8 · 830 bytes · **untouched**
- [ ] `1048:114a` FUN_1048_114a · depth 9 · 985 bytes · **untouched**
- [ ] `1048:156a` FUN_1048_156a · depth 9 · 640 bytes · **untouched**
- [ ] `1048:17ea` FUN_1048_17ea · depth 9 · 275 bytes · **untouched**
- [ ] `1048:18fe` FUN_1048_18fe · depth 9 · 253 bytes · **untouched**
- [ ] `1048:24ee` FUN_1048_24ee · depth 11 · 1372 bytes · **untouched**
- [ ] `1048:042c` FUN_1048_042c · depth 16 · 1237 bytes · **untouched**
- [ ] `1048:19fc` FUN_1048_19fc · depth 16 · 1327 bytes · **untouched**
- [ ] `1048:093e` inferred_load_obj_file · depth 17 · 531 bytes · **decompiled** — builds OBJ_%04d.dat, loads and parses it; parser not read
- [ ] `1048:1f6e` FUN_1048_1f6e · depth 17 · 572 bytes · **untouched**
- [ ] `1048:2b8e` inferred_enter_room · depth 18 · 1699 bytes · **decompiled** — builds GL00_%X%02d.000 from room/100 and room%100, loads that glue file, then OBJ file; partly read
- [ ] `1048:3236` FUN_1048_3236 · depth 19 · 73 bytes · **untouched**
- [ ] `1048:2a50` FUN_1048_2a50 · depth 20 · 315 bytes · **untouched**

### startup (0/2 done)

- [ ] `1028:03d0` inferred_init_game_session · depth 20 · 917 bytes · **decompiled** — loads GL00_WLK.000 and GL00_TXT.000 by name, GameVar.IDX, OBJ_9999.dat, fix.pal; sets up cursors and a timer; partly read
- [ ] `1028:0766` inferred_app_init · depth 21 · 422 bytes · **decompiled** — reads [DIRECTORY] CD from DARKSEED.INI into the install-directory buffers, calls load_gfile_hdr, creates the window; partly read

### startup and C runtime (1/85 done)

- [ ] `10d0:01d1` FUN_10d0_01d1 · depth 0 · 15 bytes · **untouched**
- [ ] `10d0:0241` FUN_10d0_0241 · depth 0 · 41 bytes · **untouched**
- [ ] `10d0:026a` FUN_10d0_026a · depth 0 · 19 bytes · **untouched**
- [ ] `10d0:02d2` FUN_10d0_02d2 · depth 0 · 32 bytes · **untouched**
- [ ] `10d0:034f` FUN_10d0_034f · depth 0 · 25 bytes · **untouched**
- [ ] `10d0:039b` FUN_10d0_039b · depth 0 · 1 bytes · **untouched**
- [ ] `10d0:03e2` FUN_10d0_03e2 · depth 0 · 18 bytes · **untouched**
- [ ] `10d0:0490` FUN_10d0_0490 · depth 0 · 154 bytes · **untouched**
- [ ] `10d0:052a` FUN_10d0_052a · depth 0 · 50 bytes · **untouched**
- [ ] `10d0:055c` FUN_10d0_055c · depth 0 · 95 bytes · **untouched**
- [ ] `10d0:05bc` FUN_10d0_05bc · depth 0 · 72 bytes · **untouched**
- [ ] `10d0:0604` FUN_10d0_0604 · depth 0 · 88 bytes · **untouched**
- [ ] `10d0:0943` FUN_10d0_0943 · depth 0 · 38 bytes · **untouched**
- [ ] `10d0:0e82` FUN_10d0_0e82 · depth 0 · 8 bytes · **untouched**
- [ ] `10d0:0e8a` FUN_10d0_0e8a · depth 0 · 12 bytes · **untouched**
- [ ] `10d0:0f17` FUN_10d0_0f17 · depth 0 · 49 bytes · **untouched**
- [ ] `10d0:0f48` FUN_10d0_0f48 · depth 0 · 11 bytes · **untouched**
- [ ] `10d0:0f54` FUN_10d0_0f54 · depth 0 · 33 bytes · **untouched**
- [ ] `10d0:0f76` FUN_10d0_0f76 · depth 0 · 5 bytes · **untouched**
- [ ] `10d0:0f82` FUN_10d0_0f82 · depth 0 · 55 bytes · **untouched**
- [ ] `10d0:12ec` FUN_10d0_12ec · depth 0 · 20 bytes · **untouched**
- [ ] `10d0:13f2` FUN_10d0_13f2 · depth 0 · 32 bytes · **untouched**
- [ ] `10d0:14df` FUN_10d0_14df · depth 0 · 1 bytes · **untouched**
- [ ] `10d0:155d` FUN_10d0_155d · depth 0 · 1 bytes · **untouched**
- [ ] `10d0:155e` FUN_10d0_155e · depth 0 · 91 bytes · **untouched**
- [ ] `10d0:15b9` FUN_10d0_15b9 · depth 0 · 1 bytes · **untouched**
- [ ] `10d0:15ba` FUN_10d0_15ba · depth 0 · 26 bytes · **untouched**
- [ ] `10d0:1641` FUN_10d0_1641 · depth 0 · 21 bytes · **untouched**
- [ ] `10d0:1693` FUN_10d0_1693 · depth 0 · 1 bytes · **untouched**
- [ ] `10d0:1787` FUN_10d0_1787 · depth 0 · 1 bytes · **untouched**
- [ ] `10d0:1824` FUN_10d0_1824 · depth 0 · 55 bytes · **untouched**
- [ ] `10d0:185c` FUN_10d0_185c · depth 0 · 63 bytes · **untouched**
- [ ] `10d0:189c` FUN_10d0_189c · depth 0 · 50 bytes · **untouched**
- [ ] `10d0:18ea` FUN_10d0_18ea · depth 0 · 2 bytes · **untouched**
- [ ] `10d0:18ec` FUN_10d0_18ec · depth 0 · 34 bytes · **untouched**
- [ ] `10d0:193e` FUN_10d0_193e · depth 0 · 83 bytes · **untouched**
- [ ] `10d0:01e0` FUN_10d0_01e0 · depth 1 · 97 bytes · **untouched**
- [ ] `10d0:0368` FUN_10d0_0368 · depth 1 · 51 bytes · **untouched**
- [ ] `10d0:046e` FUN_10d0_046e · depth 1 · 34 bytes · **untouched**
- [ ] `10d0:0919` FUN_10d0_0919 · depth 1 · 18 bytes · **untouched**
- [ ] `10d0:092b` FUN_10d0_092b · depth 1 · 18 bytes · **untouched**
- [ ] `10d0:0e96` FUN_10d0_0e96 · depth 1 · 29 bytes · **untouched**
- [ ] `10d0:0f7b` FUN_10d0_0f7b · depth 1 · 6 bytes · **untouched**
- [ ] `10d0:1024` FUN_10d0_1024 · depth 1 · 67 bytes · **untouched**
- [ ] `10d0:15d4` FUN_10d0_15d4 · depth 1 · 106 bytes · **untouched**
- [ ] `10d0:17f8` FUN_10d0_17f8 · depth 1 · 44 bytes · **untouched**
- [ ] `10d0:18ce` FUN_10d0_18ce · depth 1 · 27 bytes · **untouched**
- [ ] `10d0:01a3` FUN_10d0_01a3 · depth 2 · 14 bytes · **untouched**
- [ ] `10d0:01b1` FUN_10d0_01b1 · depth 2 · 15 bytes · **untouched**
- [ ] `10d0:01c0` FUN_10d0_01c0 · depth 2 · 17 bytes · **untouched**
- [ ] `10d0:0fb9` FUN_10d0_0fb9 · depth 2 · 61 bytes · **untouched**
- [ ] `10d0:1068` FUN_10d0_1068 · depth 2 · 212 bytes · **untouched**
- [ ] `10d0:1216` FUN_10d0_1216 · depth 2 · 100 bytes · **untouched**
- [ ] `10d0:127a` FUN_10d0_127a · depth 2 · 14 bytes · **untouched**
- [ ] `10d0:1288` FUN_10d0_1288 · depth 2 · 78 bytes · **untouched**
- [ ] `10d0:190e` FUN_10d0_190e · depth 2 · 36 bytes · **untouched**
- [ ] `10d0:0688` FUN_10d0_0688 · depth 3 · 35 bytes · **untouched**
- [ ] `10d0:1788` FUN_10d0_1788 · depth 3 · 111 bytes · **untouched**
- [ ] `10d0:08c9` FUN_10d0_08c9 · depth 4 · 80 bytes · **untouched**
- [ ] `10d0:029e` FUN_10d0_029e · depth 5 · 51 bytes · **untouched**
- [ ] `10d0:06ac` FUN_10d0_06ac · depth 5 · 6 bytes · **untouched**
- [ ] `10d0:0ff6` FUN_10d0_0ff6 · depth 5 · 45 bytes · **untouched**
- [ ] `10d0:138c` FUN_10d0_138c · depth 5 · 102 bytes · **untouched**
- [ ] `10d0:00c4` FUN_10d0_00c4 · depth 6 · 223 bytes · **untouched**
- [ ] `10d0:06b2` FUN_10d0_06b2 · depth 6 · 385 bytes · **untouched**
- [ ] `10d0:0834` FUN_10d0_0834 · depth 6 · 144 bytes · **untouched**
- [ ] `10d0:113c` FUN_10d0_113c · depth 6 · 218 bytes · **untouched**
- [ ] `10d0:1300` FUN_10d0_1300 · depth 6 · 140 bytes · **untouched**
- [x] `10d8:0000` inferred_stricmp · depth 6 · 81 bytes · **replaced** — ScummVM: scumm_stricmp
- [ ] `10d0:096a` FUN_10d0_096a · depth 7 · 242 bytes · **untouched**
- [ ] `10d0:1468` FUN_10d0_1468 · depth 7 · 118 bytes · **untouched**
- [ ] `10d0:0eb3` FUN_10d0_0eb3 · depth 8 · 42 bytes · **untouched**
- [ ] `10d0:1412` FUN_10d0_1412 · depth 8 · 85 bytes · **untouched**
- [ ] `10d0:1694` FUN_10d0_1694 · depth 8 · 241 bytes · **untouched**
- [ ] `10d0:0edd` FUN_10d0_0edd · depth 9 · 30 bytes · **untouched**
- [ ] `10d0:0efb` FUN_10d0_0efb · depth 9 · 28 bytes · **untouched**
- [ ] `10d0:14f4` FUN_10d0_14f4 · depth 9 · 104 bytes · **untouched**
- [ ] `10d0:1656` FUN_10d0_1656 · depth 9 · 60 bytes · **untouched**
- [ ] `10d0:0a6c` FUN_10d0_0a6c · depth 10 · 1046 bytes · **untouched**
- [ ] `10d0:14e0` FUN_10d0_14e0 · depth 10 · 19 bytes · **untouched**
- [ ] `10d0:02f2` FUN_10d0_02f2 · depth 11 · 92 bytes · **untouched**
- [ ] `10d0:12d6` FUN_10d0_12d6 · depth 11 · 22 bytes · **untouched**
- [ ] `10d0:039c` FUN_10d0_039c · depth 12 · 70 bytes · **untouched**
- [ ] `10d0:065c` FUN_10d0_065c · depth 23 · 44 bytes · **untouched**
- [ ] `10d0:001a` entry · depth 24 · 177 bytes · **untouched**

### startup helpers (0/5 done)

- [ ] `10a0:0000` FUN_10a0_0000 · depth 6 · 93 bytes · **untouched**
- [ ] `10a0:0080` FUN_10a0_0080 · depth 6 · 62 bytes · **untouched**
- [ ] `10a0:00be` FUN_10a0_00be · depth 6 · 221 bytes · **untouched**
- [ ] `10a0:005e` FUN_10a0_005e · depth 7 · 33 bytes · **untouched**
- [ ] `10a0:01ae` FUN_10a0_01ae · depth 8 · 134 bytes · **untouched**

### text and cursors (0/8 done)

- [ ] `1058:0ca4` FUN_1058_0ca4 · depth 6 · 102 bytes · **untouched**
- [ ] `1058:0000` FUN_1058_0000 · depth 11 · 479 bytes · **untouched**
- [ ] `1058:0be2` FUN_1058_0be2 · depth 20 · 193 bytes · **untouched**
- [ ] `1058:01e0` FUN_1058_01e0 · depth 21 · 1853 bytes · **untouched**
- [ ] `1058:0922` FUN_1058_0922 · depth 22 · 408 bytes · **untouched**
- [ ] `1058:0abc` FUN_1058_0abc · depth 23 · 37 bytes · **untouched**
- [ ] `1058:0ae2` FUN_1058_0ae2 · depth 23 · 37 bytes · **untouched**
- [ ] `1058:0b08` FUN_1058_0b08 · depth 23 · 217 bytes · **untouched**

### unassigned (0/6 done)

- [ ] `1020:0000` FUN_1020_0000 · depth 6 · 258 bytes · **untouched**
- [ ] `1020:0102` FUN_1020_0102 · depth 6 · 321 bytes · **untouched**
- [ ] `1020:0244` FUN_1020_0244 · depth 6 · 570 bytes · **untouched**
- [ ] `1020:0480` FUN_1020_0480 · depth 6 · 470 bytes · **untouched**
- [ ] `1020:0a14` FUN_1020_0a14 · depth 6 · 44 bytes · **untouched**
- [ ] `1020:0a40` FUN_1020_0a40 · depth 7 · 229 bytes · **untouched**

