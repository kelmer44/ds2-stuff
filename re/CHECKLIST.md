# Function checklist

Generated from `ledger.json` by `tools/make_checklist.py`; update through `tools/mark.py`, never by hand.
`[x]` means **done: status understood or later and the contract is complete** (every required field filled, Subsystems doc and Checklist boxes ticked; rules in `tools/docs_gate.py`). A function without documentation stays `[ ]` whatever its status. Status ladder: untouched < decompiled < understood < ported < emu-compared < original-compared; pure Windows glue is `replaced`.

## Overall (356 functions)

| Stage | Count | Share |
|---|---|---|
| decompiled or later (status only) | 272 | 76% |
| understood or later (status only) | 272 | 76% |
| ported or later (status only) | 8 | 2% |
| emu-compared or later (status only) | 8 | 2% |
| original-compared or later (status only) | 8 | 2% |
| replaced by a ScummVM service | 8 | |
| **done (status understood or later and documented)** | **272** | **76%** |
| status ahead of its documentation | 0 | |

## By cluster

### 32-bit bitmap helpers (10/10 done)

- [x] `10b8:0024` inferred_blit_rows_keyed · depth 0 · 165 bytes · **understood**
- [x] `10b8:0104` inferred_blit_spans_keyed · depth 0 · 242 bytes · **understood**
- [x] `10b8:0254` inferred_blit_rows_copy · depth 0 · 130 bytes · **understood**
- [x] `10b8:02b2` inferred_blit_rows_prefixed · depth 0 · 146 bytes · **understood**
- [x] `10c8:0073` inferred_scale_ratio_class · depth 0 · 139 bytes · **understood**
- [x] `10c8:00fe` inferred_stretch_fail · depth 0 · 2 bytes · **understood**
- [x] `10c8:054e` inferred_fixed_mul · depth 0 · 73 bytes · **understood**
- [x] `10c8:059a` inferred_fixed_div · depth 0 · 76 bytes · **understood**
- [x] `10c8:0040` inferred_stretch_entry · depth 1 · 87 bytes · **understood**
- [x] `10c8:0100` inferred_stretch_setup · depth 1 · 291 bytes · **understood**

### audio and video (MCI, WaveMix) (23/23 done)

- [x] `10a8:0246` inferred_is_cached_sound · depth 6 · 69 bytes · **understood**
- [x] `10a8:028e` inferred_find_cached_sound · depth 6 · 82 bytes · **understood**
- [x] `10a8:02e2` inferred_cache_sound · depth 6 · 110 bytes · **understood**
- [x] `10a8:09f4` inferred_speech_queue_busy · depth 6 · 42 bytes · **understood**
- [x] `10a8:0c72` inferred_speech_deadline · depth 6 · 165 bytes · **understood**
- [x] `10a8:0d1a` inferred_string_copy · depth 6 · 67 bytes · **understood**
- [x] `10a8:0000` inferred_mixer_activate · depth 7 · 66 bytes · **understood**
- [x] `10a8:01e8` inferred_clear_sound_cache · depth 7 · 93 bytes · **understood**
- [x] `10a8:0350` inferred_free_sound_slot · depth 7 · 146 bytes · **understood**
- [x] `10a8:0980` inferred_clear_speech_queue · depth 7 · 116 bytes · **understood**
- [x] `10a8:00e2` inferred_init_mixer · depth 8 · 122 bytes · **understood**
- [x] `10a8:03e2` inferred_free_all_sounds · depth 8 · 100 bytes · **understood**
- [x] `10a8:0a1e` inferred_play_music · depth 8 · 352 bytes · **understood**
- [x] `10a8:0b7e` inferred_stop_all_audio · depth 8 · 63 bytes · **understood**
- [x] `10a8:0bbe` inferred_loop_music · depth 8 · 179 bytes · **understood**
- [x] `10a8:0446` inferred_load_sound · depth 16 · 306 bytes · **understood**
- [x] `10a8:015e` inferred_play_sound · depth 17 · 138 bytes · **understood**
- [x] `10a8:07dc` inferred_pump_speech_queue · depth 18 · 419 bytes · **understood**
- [x] `10a8:0042` inferred_stop_speech_and_continue · depth 19 · 79 bytes · **understood**
- [x] `10a8:0092` inferred_stop_speech_and_continue_2 · depth 19 · 79 bytes · **understood**
- [x] `10a8:057a` inferred_on_wave_done · depth 19 · 190 bytes · **understood**
- [x] `10a8:0638` inferred_queue_speech · depth 19 · 193 bytes · **understood**
- [x] `10a8:06fa` inferred_queue_sound · depth 19 · 224 bytes · **understood**

### clicking (2/2 done)

- [x] `1058:01e0` inferred_run_object_action · depth 21 · 1853 bytes · **understood**
- [x] `1058:0922` inferred_hit_test_click · depth 22 · 408 bytes · **understood**

### conversations (16/16 done)

- [x] `1068:1654` inferred_unread_conv_line · depth 6 · 61 bytes · **understood**
- [x] `1068:0edc` inferred_eval_rpn · depth 7 · 334 bytes · **understood**
- [x] `1068:15b8` inferred_run_conversation_dialog · depth 7 · 154 bytes · **understood** — unread
- [x] `1068:1692` inferred_next_conv_token · depth 7 · 839 bytes · **understood**
- [x] `1068:2074` inferred_find_entry_by_name · depth 7 · 103 bytes · **understood**
- [x] `1068:20dc` inferred_find_node · depth 7 · 103 bytes · **understood**
- [x] `1068:0000` inferred_free_conversation_ui · depth 8 · 108 bytes · **understood**
- [x] `1068:1030` inferred_fill_dialog_list · depth 8 · 422 bytes · **understood** — starting node and entry list: follows the first goto whose condition (eval_rpn) is true, fills the list box with the texts of entries whose flags & 5 == 1, follows the node's fallthrough while its visible-entry count is not above the fallthrough number (node +0x34); posts selection messages
- [x] `1068:2144` inferred_resolve_conversation_names · depth 8 · 566 bytes · **understood** — second pass: every goto/hide/unhide/destroy record's name (+0x2e) is looked up (20dc nodes, 2074 entries) and the pointer stored at +0x2a/+0x2c; node fallthrough name (+0x20) resolved into +0x36/+0x38
- [x] `1068:1efe` inferred_parse_conv_condition · depth 10 · 357 bytes · **understood** — parses the (Variable) condition prefix of goto/destroy lines ('Expression without ,' error); unread
- [x] `1068:1c6c` inferred_load_conv_text · depth 16 · 242 bytes · **understood**
- [x] `1068:2418` inferred_parse_entry · depth 18 · 885 bytes · **understood** — reads a CONV file into a node tree: NODE starts a node, ENTRY allocates a 0x42-byte entry (name +0x2b, flag bits at +0x29: INITIAL = 1, PERSIST = 2), TEXT/MESSAGE/HIDE/UNHIDE/ASSIGN/DESTROY/GOTO lists allocated per entry; speaker variable names with Speaker; record layout not resolved | entry body: lists at entry +0x15 (goto), +0x19 (hide), +0x1d (unhide), +0x21 (destroy), +0x25 (assign), message chain (0x17-byte nodes) via 1b6e, text via 1c6c; next entry at +0x3f/+0x41; partly read
- [x] `1068:27a8` inferred_parse_node · depth 19 · 709 bytes · **understood** — second loader variant (INITIAL, PERSIST keywords); unread | node body: ENTRY allocates a 0x42-byte entry (name +0x2b, flags +0x29: INITIAL bit 0, PERSIST bit 1) and parses its lines with 2418; FALLTHROUGH n, Node -> node +0x34 number and +0x20 name; GOTO -> 0x46-byte records chained at +0x42/+0x44 whose condition is compiled by 1efe/1e12; ASSIGN list; partly read
- [x] `1068:11da` inferred_entry_selected · depth 20 · 987 bytes · **understood**
- [x] `1068:2a72` inferred_load_conversation_file · depth 20 · 750 bytes · **understood** — loads conversation CONVnnnn (number from characters 4-7 of the name, DS:3438) as text, allocates the 0x242-byte conversation record at DS:5cba and fills it: SPEAKER -> 237a, CONVERSATION name, DECLARE -> variable slot, NODE -> 0x3e-byte node (name +0xc) via 27a8; then 2144 resolves names, and the compiled form is cached per conversation number (DS:6116) by 31a6/30a6; partly read
- [x] `1068:006c` DIALOGPROC · depth 21 · 3637 bytes · **understood** — the conversation window procedure (3.6 KB): list box of choices, speaker pictures, subtitles; entry selection (EntrySelected) unread | window procedure: WM_PAINT draws the 640x70 panel and the custom list (hover, up/down keys 0x26/0x28 and 0x68/0x62), WM_INITDIALOG builds the images, mouse/key select calls inferred_entry_selected then inferred_fill_dialog_list; ends the dialog (ENDDIALOG + free) when the next node is 0; drawing details unread

### dialogs (12/12 done)

- [x] `1010:0000` inferred_init_file_dialog · depth 6 · 165 bytes · **understood**
- [x] `1010:00a6` inferred_dir_of_path · depth 6 · 120 bytes · **understood**
- [x] `1010:0336` inferred_open_play_settings · depth 6 · 89 bytes · **understood**
- [x] `1010:08a2` ABOUT_DLG_PROC · depth 6 · 105 bytes · **understood**
- [x] `1010:0938` inferred_testing_dialog_proc · depth 6 · 223 bytes · **understood**
- [x] `1010:0b72` inferred_add_clamped_byte · depth 6 · 76 bytes · **understood**
- [x] `1010:0794` inferred_show_buffer_message · depth 7 · 50 bytes · **understood**
- [x] `1010:0a44` inferred_read_options · depth 7 · 156 bytes · **understood**
- [x] `1010:0ae0` inferred_write_options · depth 7 · 145 bytes · **understood**
- [x] `1010:0230` inferred_confirm_quit · depth 9 · 260 bytes · **understood**
- [x] `1010:0390` PLAYSET_DLG_PROC · depth 9 · 965 bytes · **understood**
- [x] `1010:011e` inferred_new_game · depth 20 · 272 bytes · **understood**

### dialogs and options (7/7 done)

- [x] `1060:00fc` inferred_take_rest · depth 6 · 138 bytes · **understood**
- [x] `1060:0378` inferred_add_variable · depth 6 · 274 bytes · **understood**
- [x] `1060:0554` inferred_remove_variable · depth 6 · 251 bytes · **understood**
- [x] `1060:1182` inferred_fill_variable_combo · depth 6 · 93 bytes · **understood**
- [x] `1060:11e0` inferred_show_variable_values · depth 6 · 170 bytes · **understood**
- [x] `1060:0b62` inferred_dump_variables · depth 8 · 226 bytes · **understood**
- [x] `1060:128a` VAR_CHECKER_PROC · depth 8 · 399 bytes · **understood**

### dialogs and saves (7/7 done)

- [x] `1018:0566` inferred_open_save_dialog · depth 6 · 89 bytes · **understood**
- [x] `1018:05c0` inferred_xor_scramble · depth 6 · 136 bytes · **understood**
- [x] `1018:0000` LOADGAMEPROC · depth 7 · 459 bytes · **understood**
- [x] `1018:09ce` inferred_write_save_file · depth 8 · 630 bytes · **understood**
- [x] `1018:0278` SAVEGAMEPROC · depth 9 · 702 bytes · **understood**
- [x] `1018:0648` inferred_load_save_file · depth 21 · 900 bytes · **understood**
- [x] `1018:01fa` inferred_open_load_dialog · depth 22 · 126 bytes · **understood**

### dialogs and script (12/12 done)

- [x] `1068:19ea` inferred_append_trimmed · depth 6 · 138 bytes · **understood**
- [x] `1068:1d60` inferred_operand_extent · depth 6 · 107 bytes · **understood**
- [x] `1068:30a6` inferred_restore_entry_flags · depth 6 · 132 bytes · **understood**
- [x] `1068:312a` inferred_save_entry_flags · depth 6 · 124 bytes · **understood**
- [x] `1068:3280` inferred_fill_huge · depth 6 · 60 bytes · **understood**
- [x] `1068:237a` inferred_parse_speaker · depth 7 · 158 bytes · **understood**
- [x] `1068:2d64` inferred_free_conversation · depth 7 · 833 bytes · **understood**
- [x] `1068:1dcc` inferred_compile_operand · depth 8 · 69 bytes · **understood**
- [x] `1068:31a6` inferred_snapshot_entry_flags · depth 8 · 218 bytes · **understood**
- [x] `1068:1e12` inferred_compile_condition · depth 9 · 234 bytes · **understood**
- [x] `1068:1a74` inferred_load_message_text · depth 16 · 249 bytes · **understood**
- [x] `1068:1b6e` inferred_parse_messages · depth 17 · 253 bytes · **understood**

### game tick (6/6 done)

- [x] `1048:24ee` inferred_start_room_media · depth 11 · 1372 bytes · **understood** — AVI video start (OPEN avivideo, play vfw ...); unread | finds the entry record matching FromRoom and true condition; fixes palette (flag +0x14 bit 0), starts the AVI named in Anim= (names beginning with T/t play full screen 0,0,320,240) via MCI; MCI part unread
- [x] `1048:2b8e` inferred_enter_room · depth 18 · 1699 bytes · **understood** — builds GL00_%X%02d.000 from room/100 and room%100, loads that glue file, then OBJ file; partly read | builds GL00_%X%02d.000 and loads it, loads ROOM file via 1048:1f6e and OBJ file via 1048:093e, loads WALKMAP bitmap into a 80x48 grid at room+0x52 (8 border columns each side), loads per-frame images through 1070:0000, creates the sprite records; helpers 1078:03be/0106/00ca unread
- [x] `1048:3236` inferred_enter_room_and_start · depth 19 · 73 bytes · **understood** — SysMapBlock handling; unread
- [x] `1038:1ade` inferred_world_step · depth 20 · 2767 bytes · **understood** — called from the tick when DS:610e (room-changed flag) is set; unread
- [x] `1048:2a50` inferred_run_room_entry · depth 20 · 315 bytes · **understood** — exit/room-change variables (FromRoom, LastAction); unread
- [x] `1038:086e` inferred_game_tick · depth 21 · 4706 bytes · **understood** — WM_TIMER handler called from WINPROC every timer tick with the window message words; the main per-tick update (animation frames, SEQUENCE=, SPEECH=, CHANGEAT=, AVI control, GoingOut, SysReadyExit); not read | partly read: see SUBSYSTEMS 'The game tick'; script and AVI parts unread

### game variables (19/19 done)

- [x] `1060:0000` inferred_uppercase · depth 6 · 98 bytes · **understood**
- [x] `1060:0062` inferred_next_identifier · depth 6 · 152 bytes · **understood**
- [x] `1060:0188` inferred_next_word · depth 6 · 152 bytes · **understood**
- [x] `1060:0222` inferred_next_token · depth 6 · 152 bytes · **understood**
- [x] `1060:048e` inferred_register_local_var · depth 6 · 194 bytes · **understood**
- [x] `1060:0846` inferred_test_terms · depth 6 · 210 bytes · **understood**
- [x] `1060:092e` inferred_apply_terms · depth 6 · 200 bytes · **understood**
- [x] `1060:0c44` inferred_parse_numbers · depth 6 · 232 bytes · **understood**
- [x] `1060:0d2e` inferred_parse_number_list · depth 6 · 490 bytes · **understood**
- [x] `1060:0f1c` inferred_parse_long_list · depth 6 · 290 bytes · **understood** — parses numbers into 32-bit values for POSX/POSY; the multiply step is garbled in the decompile
- [x] `1060:02bc` inferred_find_var · depth 7 · 184 bytes · **understood**
- [x] `1060:07a8` inferred_free_term_list · depth 7 · 77 bytes · **understood**
- [x] `1060:07f6` inferred_test_any · depth 7 · 78 bytes · **understood**
- [x] `1060:1040` inferred_read_idx_line · depth 7 · 121 bytes · **understood**
- [x] `1060:0652` inferred_parse_terms · depth 8 · 337 bytes · **understood**
- [x] `1060:0a0a` inferred_apply_terms_for_var · depth 8 · 226 bytes · **understood**
- [x] `1060:0b00` inferred_get_var · depth 8 · 37 bytes · **understood**
- [x] `1060:0b26` inferred_set_var · depth 8 · 58 bytes · **understood**
- [x] `1060:10ba` inferred_load_game_vars · depth 16 · 199 bytes · **understood**

### graphics and bitmaps (2/2 done)

- [x] `1038:01a4` inferred_free_scroll_picture · depth 7 · 63 bytes · **understood**
- [x] `1038:0000` inferred_load_scroll_picture · depth 9 · 419 bytes · **understood**

### graphics and palette (26/26 done)

- [x] `1080:0000` inferred_copy_string · depth 6 · 67 bytes · **replaced** — ScummVM: Common::String
- [x] `1080:0044` inferred_append_string · depth 6 · 91 bytes · **replaced** — ScummVM: Common::String
- [x] `1080:00a0` inferred_vga6_to_8bit · depth 6 · 34 bytes · **understood**
- [x] `1080:00c2` inferred_delete_game_palette · depth 6 · 44 bytes · **replaced** — Windows resource cleanup
- [x] `1080:02f0` inferred_fade_to_black · depth 6 · 154 bytes · **understood**
- [x] `1080:038a` inferred_dim_palette · depth 6 · 143 bytes · **understood**
- [x] `1080:041a` inferred_undim_palette · depth 6 · 128 bytes · **understood**
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
- [x] `1080:01de` inferred_cycle_palette · depth 8 · 274 bytes · **understood**
- [x] `1080:049a` inferred_make_bmp_palette · depth 8 · 400 bytes · **understood**
- [x] `1080:09f8` inferred_create_bitmap_from_image · depth 8 · 220 bytes · **understood**
- [x] `1080:0b30` inferred_create_bitmap_with_palette · depth 8 · 175 bytes · **understood**
- [x] `1080:0be0` inferred_make_bitmap_rgb · depth 8 · 231 bytes · **understood**
- [x] `1080:0650` inferred_load_palette_into_dc · depth 16 · 168 bytes · **understood**
- [x] `1080:071a` inferred_load_palette_file · depth 16 · 133 bytes · **understood**
- [x] `1080:0800` inferred_load_mask · depth 16 · 143 bytes · **understood**
- [x] `1080:0890` inferred_load_image · depth 16 · 143 bytes · **understood**

### graphics and sprites (26/26 done)

- [x] `1078:00ca` inferred_set_scene_clip · depth 6 · 60 bytes · **understood**
- [x] `1078:0106` inferred_init_sprite · depth 6 · 107 bytes · **understood**
- [x] `1078:043e` inferred_empty_function · depth 6 · 22 bytes · **understood**
- [x] `1078:05be` inferred_sort_sprite_list · depth 6 · 309 bytes · **understood**
- [x] `1078:0806` inferred_remove_sprite · depth 6 · 184 bytes · **understood**
- [x] `10b0:0000` inferred_draw_bitmap_clipped · depth 6 · 764 bytes · **understood**
- [x] `1070:0136` inferred_image_cache_release · depth 7 · 227 bytes · **understood**
- [x] `1078:0000` inferred_draw_debug_text · depth 7 · 202 bytes · **understood**
- [x] `1078:03be` inferred_init_scene_lists · depth 7 · 127 bytes · **understood**
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
- [x] `10c0:0000` inferred_stretch_dib · depth 13 · 600 bytes · **understood** — wrapper of the 'stretch.c' stretch library (asserts on null pointers and unequal bit depth, clips to the destination, calls 10c8:0040); the resampling in 10c8 is unread
- [x] `1020:0656` inferred_scale_image · depth 14 · 953 bytes · **understood**
- [x] `1038:01e4` inferred_update_room_sprites · depth 15 · 1671 bytes · **understood** — updates every room object's sprite and Mike's two sprites (scales images with 1020:0656, registers changes with 1078:18d8), then repaints with 1078:1796; partly read
- [x] `1070:0000` inferred_image_cache_get · depth 17 · 307 bytes · **understood**

### main window and input (22/22 done)

- [x] `1000:0000` inferred_set_rect · depth 6 · 51 bytes · **understood**
- [x] `1000:1016` POPUPPROC · depth 6 · 605 bytes · **understood**
- [x] `1000:1a98` inferred_next_word · depth 6 · 115 bytes · **understood**
- [x] `1008:00b6` inferred_restore_cursor · depth 6 · 31 bytes · **understood**
- [x] `1008:0f86` inferred_build_dim_remap · depth 6 · 309 bytes · **understood**
- [x] `1000:1b0e` inferred_parse_command_line · depth 7 · 290 bytes · **understood**
- [x] `1000:1d1a` inferred_toggle_music · depth 7 · 187 bytes · **understood**
- [x] `1000:1c36` inferred_toggle_digital_sound · depth 8 · 226 bytes · **understood**
- [x] `1008:00d6` inferred_draw_inventory_left_arrow · depth 8 · 224 bytes · **understood**
- [x] `1008:01b8` inferred_draw_inventory_right_arrow · depth 8 · 232 bytes · **understood**
- [x] `1008:02a2` inferred_draw_inventory_bar · depth 8 · 389 bytes · **understood**
- [x] `1008:0a58` inferred_free_inventory_images · depth 8 · 158 bytes · **understood**
- [x] `1008:0000` inferred_set_inventory_cursor_arrow · depth 9 · 75 bytes · **understood**
- [x] `1008:004c` inferred_set_inventory_cursor_item · depth 9 · 104 bytes · **understood**
- [x] `1008:0e16` inferred_demote_have_items · depth 9 · 182 bytes · **understood**
- [x] `1008:0ece` inferred_promote_have_items · depth 9 · 182 bytes · **understood**
- [x] `1000:19f2` inferred_show_centered_picture · depth 17 · 166 bytes · **understood**
- [x] `1008:0af6` inferred_open_inventory_bar · depth 17 · 800 bytes · **understood**
- [x] `1000:0034` inferred_win_main · depth 22 · 513 bytes · **understood**
- [x] `1000:12be` inferred_handle_key · depth 23 · 1829 bytes · **understood**
- [x] `1000:0236` WINPROC · depth 24 · 3482 bytes · **understood**
- [x] `1008:0428` DLG_INVENTORY · depth 24 · 1524 bytes · **understood**

### math (5/5 done)

- [x] `10a0:0000` inferred_sin · depth 6 · 93 bytes · **understood**
- [x] `10a0:0080` inferred_fixmul14 · depth 6 · 62 bytes · **understood**
- [x] `10a0:00be` inferred_atan2 · depth 6 · 221 bytes · **understood**
- [x] `10a0:005e` inferred_cos · depth 7 · 33 bytes · **understood**
- [x] `10a0:01ae` inferred_vector_length · depth 8 · 134 bytes · **understood** — length of (dx,dy) from the dominant component divided by cos/sin of the angle; the scale of the result is not settled (decompile drops a shift)

### options (INI) (3/3 done)

- [x] `1030:0000` inferred_ini_write_int · depth 6 · 62 bytes · **understood**
- [x] `1030:003e` inferred_ini_write_string · depth 6 · 43 bytes · **understood**
- [x] `1030:006a` inferred_ini_get_int · depth 6 · 42 bytes · **understood**

### resource (4/4 done)

- [x] `10b8:0368` inferred_lz_decompress_block · depth 0 · 129 bytes · **understood** — contract 10b8_0368; Ghidra mis-decodes (USE32 segment)
- [x] `1090:0068` inferred_mem_free · depth 6 · 76 bytes · **understood** — GlobalHandle/Unlock/Free wrapper
- [x] `1090:0000` inferred_mem_alloc · depth 7 · 102 bytes · **understood** — GlobalAlloc+Lock wrapper
- [x] `1028:09f6` inferred_load_gfile_hdr · depth 8 · 336 bytes · **understood** — contract 1028_09f6

### resource layer (29/29 done)

- [x] `10d0:03f4` inferred_dos_findfirst · depth 2 · 122 bytes · **replaced** — ScummVM: Common::File::exists
- [x] `1028:0000` inferred_set_system_palette_mode · depth 6 · 124 bytes · **understood**
- [x] `1028:007e` inferred_set_black_system_colors · depth 6 · 56 bytes · **understood**
- [x] `1028:00b6` inferred_fixed_palette_store · depth 6 · 151 bytes · **understood**
- [x] `1028:014e` inferred_reset_system_palette · depth 6 · 155 bytes · **understood**
- [x] `1028:090e` inferred_register_window_class · depth 6 · 85 bytes · **understood**
- [x] `1028:0964` inferred_speed_up_system_timer · depth 6 · 81 bytes · **understood**
- [x] `1028:09b6` inferred_restore_system_timer · depth 6 · 63 bytes · **understood**
- [x] `1028:0b48` inferred_find_missing_avi · depth 6 · 92 bytes · **understood**
- [x] `1030:0094` inferred_read_ini_string · depth 6 · 50 bytes · **understood**
- [x] `1088:0350` inferred_glue_name_listed · depth 6 · 85 bytes · **understood**
- [x] `1088:04c8` inferred_normalize_name · depth 6 · 83 bytes · **understood**
- [x] `1088:0966` inferred_set_glue_not_loaded · depth 6 · 31 bytes · **understood**
- [x] `1088:0986` inferred_set_glue_loaded · depth 6 · 31 bytes · **understood**
- [x] `1098:0248` inferred_message_box · depth 6 · 44 bytes · **understood**
- [x] `1098:029e` inferred_read_huge · depth 6 · 134 bytes · **understood**
- [x] `10d8:0052` inferred_compare_name12 · depth 6 · 97 bytes · **understood**
- [x] `1088:02ac` inferred_unload_glue_file · depth 7 · 161 bytes · **understood**
- [x] `1088:03a6` inferred_scan_glue_files · depth 7 · 290 bytes · **understood**
- [x] `1088:051c` inferred_find_entry · depth 7 · 267 bytes · **understood**
- [x] `1088:09a6` inferred_free_glue_table · depth 7 · 52 bytes · **understood**
- [x] `1098:0000` inferred_report_error · depth 7 · 123 bytes · **understood**
- [x] `1028:01ea` inferred_free_room_data · depth 8 · 485 bytes · **understood**
- [x] `1088:0000` inferred_read_file_to · depth 8 · 61 bytes · **understood** — wrapper for 1098:029e with error
- [x] `1088:0892` inferred_get_file_size · depth 8 · 210 bytes · **understood** — size of a resource by name
- [x] `1088:003e` inferred_load_glue_file · depth 10 · 620 bytes · **understood** — loads and LZ-decodes a whole glue file; read at asm level only in part
- [x] `1088:062c` inferred_make_alias_selector · depth 13 · 135 bytes · **understood**
- [x] `1088:06b4` inferred_load_file · depth 14 · 474 bytes · **understood** — load resource by name; copies 22-byte entry record
- [x] `1098:0326` inferred_load_file_or_plain · depth 15 · 277 bytes · **understood**

### resource layer and errors (5/5 done)

- [x] `1098:007c` inferred_int_to_string · depth 6 · 139 bytes · **understood**
- [x] `1098:0108` inferred_draw_text_outlined · depth 6 · 137 bytes · **understood**
- [x] `1098:0192` inferred_set_text_colors · depth 6 · 48 bytes · **understood**
- [x] `1098:01c2` inferred_draw_text_shadowed · depth 6 · 134 bytes · **understood**
- [x] `1098:0274` inferred_file_exists · depth 6 · 42 bytes · **understood**

### rooms and cursors (6/6 done)

- [x] `1050:011a` inferred_set_object_next · depth 6 · 39 bytes · **understood**
- [x] `1050:0142` inferred_remove_object · depth 7 · 410 bytes · **understood**
- [x] `1050:0000` inferred_has_true_action · depth 8 · 97 bytes · **understood**
- [x] `1050:02de` inferred_free_wait_chain · depth 8 · 123 bytes · **understood**
- [x] `1050:0062` inferred_hover_flags · depth 9 · 184 bytes · **understood**
- [x] `1050:035a` inferred_free_object_list · depth 9 · 518 bytes · **understood**

### script and rooms (12/12 done)

- [x] `1048:03c4` inferred_skip_line · depth 6 · 104 bytes · **understood**
- [x] `1048:0000` inferred_next_obj_token · depth 7 · 940 bytes · **understood**
- [x] `1048:0b54` inferred_next_room_token · depth 7 · 1480 bytes · **understood**
- [x] `1048:21b0` inferred_unload_room · depth 8 · 830 bytes · **understood** — room object helper, AAAAAAAAAAA%02d local variable names; unread | unloads the room: resets local variable slots 1..20 to placeholder names AAAAAAAAAAA%02d with value 0, frees entry list, sprite nodes (images through 1070:0136, scaled images, condition lists), mirror/palette arrays, the room record, the two Mike sprite records, then frees the room's glue file (1088:02ac) named GL00_%X%02d.000; details of each freed structure partly read
- [x] `1048:114a` inferred_parse_sprite_section · depth 9 · 985 bytes · **understood** — room section parser (uses inferred_next_room_token); unread | SPRITESTART section: COND starts a 0x685-byte sprite node (linked from room +0x39, next at node +0x681, state +0x67b = 100, condition list at +0xd); ANIM name at +0; EFFECT number +0x45 name +0x47; SPEECH number +0x54 name +0x56; STATUS six numbers at +0x67..+0x71 (flags, ?, ?, list number (+0x6d), frame count (+0x6f), ?); SEQUENCE list into +0x27b (default 1..count); STARTINDEX/ENDINDEX (+0x63/+0x65, default 0..count-1); SPRITEIDX into +0x67b; error 'Too many frames in one animation!' above 128 frames; LOADCOND/LOOPCOND/LOOPPOINT/POSX/POSY/SCALEVAL partly read
- [x] `1048:156a` inferred_parse_mirror_section · depth 9 · 640 bytes · **understood** — room section parser (uses inferred_next_room_token); unread | MIRRORSTART section; unread in detail | MIRRORSTART section: COND/COND2 nodes, CLIPXY (4 numbers), SCALEVAL via 1060:0c44/0d2e, POSX/POSY via 1060:0f1c into per-mirror arrays; mirror record layout not resolved
- [x] `1048:17ea` inferred_parse_palette_section · depth 9 · 275 bytes · **understood** — room section parser, sprites (SEQUENCE=, SPEECH=, CHANGE=, ENDINDEX=); unread | PALETTESTART section: COND/COND2 list nodes, STARTINDEX/ENDINDEX numbers; destination fields near room +0xfe2 not located
- [x] `1048:18fe` inferred_parse_music_section · depth 9 · 253 bytes · **understood** — room section parser, music (MUSICEND=); unread | MUSICSTART section: COND list node, MIDI name; destination array in the room record not located
- [x] `1048:042c` inferred_parse_action_block · depth 16 · 1237 bytes · **understood** — reads lines with inferred_next_obj_token until the end token given as argument; fills a 150-byte action record per COND (XYROOM 5 numbers, TEXT loads NAME.txt, EFFECT/SPEECH/PICTURE/MIDI/DIALOG/CURSOR strings, ANIM 5 numbers + name, CHANGE/SPEECHVAR/COND2/WAITUNTIL term lists, DESTROY sets +0xc); partly read
- [x] `1048:19fc` inferred_parse_entry_section · depth 16 · 1327 bytes · **understood** — runs animations or talk entries (Speaker, SysTalking, LastAction, SysMapBlock, 'Too many frames in one animation!'); unread | ENTRYSTART section: uses the object lexer, handles From/XYRoom/Change/etc.; unread in detail
- [x] `1048:093e` inferred_load_obj_file · depth 17 · 531 bytes · **understood** — builds OBJ_%04d.dat, loads and parses it; parser not read
- [x] `1048:1f6e` inferred_load_room · depth 17 · 572 bytes · **understood** — loads a room: builds ROOM%04d.DAT, loads mask and palette; unread

### startup (2/2 done)

- [x] `1028:03d0` inferred_init_game_session · depth 20 · 917 bytes · **understood** — loads GL00_WLK.000 and GL00_TXT.000 by name, GameVar.IDX, OBJ_9999.dat, fix.pal; sets up cursors and a timer; partly read
- [x] `1028:0766` inferred_app_init · depth 21 · 422 bytes · **understood** — reads [DIRECTORY] CD from DARKSEED.INI into the install-directory buffers, calls load_gfile_hdr, creates the window; partly read

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

### text and cursors (6/6 done)

- [x] `1058:0ca4` inferred_video_destination_text · depth 6 · 102 bytes · **understood**
- [x] `1058:0000` inferred_show_subtitle · depth 11 · 479 bytes · **understood**
- [x] `1058:0be2` inferred_change_room · depth 20 · 193 bytes · **understood**
- [x] `1058:0abc` inferred_click_look · depth 23 · 37 bytes · **understood**
- [x] `1058:0ae2` inferred_click_use · depth 23 · 37 bytes · **understood**
- [x] `1058:0b08` inferred_click_go · depth 23 · 217 bytes · **understood**

### unassigned (6/6 done)

- [x] `1020:0000` inferred_resample_rows · depth 6 · 258 bytes · **understood**
- [x] `1020:0102` inferred_resample_rows_mirrored · depth 6 · 321 bytes · **understood**
- [x] `1020:0244` inferred_resample_rows_sheared · depth 6 · 570 bytes · **understood**
- [x] `1020:0480` inferred_resample_rows_sheared_mirrored · depth 6 · 470 bytes · **understood**
- [x] `1020:0a14` inferred_bit_length · depth 6 · 44 bytes · **understood**
- [x] `1020:0a40` inferred_dissolve_step · depth 7 · 229 bytes · **understood**

### walking (3/3 done)

- [x] `1040:0000` inferred_walk_line_clear · depth 6 · 280 bytes · **understood**
- [x] `1040:011a` inferred_find_walk_path · depth 9 · 1860 bytes · **understood** — path search on the 80x48 grid: fills DS:3eba from the walk grid (cell > SysMapBlock = walkable), snaps blocked start/target cells to the nearest walkable cell with a 4-neighbour breadth-first search, then searches the path; path extraction into DS:3cb2 not read
- [x] `1010:07c6` inferred_start_walk · depth 10 · 220 bytes · **understood**

