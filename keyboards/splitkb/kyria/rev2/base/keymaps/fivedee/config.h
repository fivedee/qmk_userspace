/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FORCE_NKRO

#define TAPPING_TERM 160
#define CHORDAL_HOLD
#define FLOW_TAP_TERM 120
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
#define PERMISSIVE_HOLD_PER_KEY

#define COMBO_ONLY_FROM_LAYER 0

#define RGBLIGHT_HUE_STEP 5
#define RGBLIGHT_SAT_STEP 5
#define RGBLIGHT_VAL_STEP 5
#define RGBLIGHT_SLEEP
#define SPLIT_LAYER_STATE_ENABLE

// Points to a custom font file
#define OLED_FONT_H "noellefont.c"

#define EE_HANDS

#define ENCODER_RESOLUTION 2