// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define FORCE_NKRO
#define RGBLIGHT_HUE_STEP 6
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 6

#define BILATERAL_COMBINATIONS 750

#define COMBO_ONLY_FROM_LAYER 0

#define ONESHOT_TIMEOUT 1000

// Custom Mapping

#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
) \
LAYOUT_split_3x6_3( \
KC_GRV ,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_BSLS, \
KC_LPRN,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_RPRN, \
CW_TOGG,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  LSFT(KC_ENT), \
                      K32,  K33,  K34,         TD(SFT_SYM),  K36,  K37 \
)

#define MIRYOKU_LAYERMAPPING_NUM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
) \
LAYOUT_split_3x6_3( \
KC_TRNS,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_TRNS, \
KC_LBRC,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_RBRC, \
KC_TRNS,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_TRNS, \
                      K32,  K33,  K34,         K35,  K36,  K37 \
)

#define MIRYOKU_LAYERMAPPING_SYM( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
) \
LAYOUT_split_3x6_3( \
KC_TRNS,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_TRNS, \
KC_LCBR,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_RCBR, \
KC_TRNS,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_TRNS, \
                      K32,  K33,  K34,         K35,  K36,  K37 \
)

