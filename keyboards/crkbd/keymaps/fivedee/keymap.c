/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "fivedee.h"
#include "rep_defs.h"

const key_override_t lprn_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_LPRN, KC_LT, (1<<_QWRT | 1<<_STDY));
const key_override_t rprn_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_RPRN, KC_GT, (1<<_QWRT | 1<<_STDY));
const key_override_t comm_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, KC_SCLN, (1<<_QWRT | 1<<_STDY));
const key_override_t dot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COLN, (1<<_QWRT | 1<<_STDY));
const key_override_t ques_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUES, KC_EXLM, (1<<_QWRT | 1<<_STDY));
const key_override_t numdot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COMM, 1<<_NUM);


bool rgb_matrix_indicators_user(void) {
    rgb_matrix_set_color(44, 0, 191, 111);
    rgb_matrix_set_color(38, 234, 58, 120);
    rgb_matrix_set_color(43, 72, 101, 214);
    rgb_matrix_set_color(46, 244, 48, 62);
    return true;
}
enum combos {
    cmb_AT,
    cmb_HSH,
    cmb_DLR,
    cmb_PER,
    cmb_CRT,
    cmb_AND,
    cmb_STR,
    cmb_SLS,
    cmb_GRV,
    cmb_BSL,
    cmb_MNS,
    cmb_EQL,
    cmb_USC,
    cmb_PLS,
    cmb_PIP,
    cmb_TIL,
    cmb_LDR,
    cmb_CWD,
    cmb_BSP,
    cmb_DEL,
    cmb_ESC,
    cmb_PNK,
    cmb_CPY,
    cmb_PST,
    cmb_CUT,
    cmb_MDA,
    cmb_FUN,
    cmb_ADB,
    cmb_ENT,
    cmb_LPR,
    cmb_LBR,
    cmb_RPR,
    cmb_RBR,
    cmb_TAB
};

const uint16_t PROGMEM combo_AT[] ={KC_W, LALT_T(KC_S), COMBO_END};
const uint16_t PROGMEM combo_HSH[] ={KC_E, LCTL_T(KC_D), COMBO_END};
const uint16_t PROGMEM combo_DLR[] ={KC_R, LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM combo_PER[] ={KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM combo_CRT[] ={KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM combo_AND[] ={KC_U, RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM combo_STR[] ={KC_I, RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo_SLS[] ={KC_O, RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo_GRV[] ={LALT_T(KC_S), KC_X, COMBO_END};
const uint16_t PROGMEM combo_BSL[] ={KC_G, KC_B, COMBO_END};
const uint16_t PROGMEM combo_MNS[] ={LSFT_T(KC_F), KC_V, COMBO_END};
const uint16_t PROGMEM combo_EQL[] ={RCTL_T(KC_K), KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_USC[] ={LCTL_T(KC_D), KC_C, COMBO_END};
const uint16_t PROGMEM combo_PLS[] ={RSFT_T(KC_J), KC_M, COMBO_END};
const uint16_t PROGMEM combo_PIP[] ={KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM combo_TIL[] ={RALT_T(KC_L), KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_LDR[] ={LCTL_T(KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM combo_CWD[] ={LSFT_T(KC_F), RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM combo_BSP[] ={KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo_DEL[] ={KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_ESC[] ={KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_PNK[] ={LCTL_T(KC_D), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo_CPY[] ={KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_PST[] ={KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_CUT[] ={KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM combo_MDA[] ={LT(_NAV, KC_SPC), KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo_FUN[] ={KC_BSPC, OSM(MOD_LSFT), COMBO_END};
const uint16_t PROGMEM combo_ADB[] ={OSM(MOD_LSFT), NUMWORD, COMBO_END};
const uint16_t PROGMEM combo_ENT[] ={KC_M, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_LBR[] ={KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_LPR[] ={RSFT_T(KC_J), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo_RBR[] ={KC_DOT, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_RPR[] ={RCTL_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo_TAB[] ={LALT_T(KC_S), LCTL_T(KC_D), COMBO_END};

combo_t key_combos[] = {
    [cmb_AT] = COMBO(combo_AT, KC_AT),
    [cmb_HSH] = COMBO(combo_HSH, KC_HASH),
    [cmb_DLR] = COMBO(combo_DLR, KC_DLR),
    [cmb_PER] = COMBO(combo_PER, KC_PERC),
    [cmb_CRT] = COMBO(combo_CRT, KC_CIRC),
    [cmb_AND] = COMBO(combo_AND, KC_AMPR),
    [cmb_STR] = COMBO(combo_STR, KC_ASTR),
    [cmb_SLS] = COMBO(combo_SLS, KC_SLSH),
    [cmb_GRV] = COMBO(combo_GRV, KC_GRV),
    [cmb_BSL] = COMBO(combo_BSL, KC_BSLS),
    [cmb_MNS] = COMBO(combo_MNS, KC_MINS),
    [cmb_EQL] = COMBO(combo_EQL, KC_EQL),
    [cmb_USC] = COMBO(combo_USC, KC_UNDS),
    [cmb_PLS] = COMBO(combo_PLS, KC_PLUS),
    [cmb_PIP] = COMBO(combo_PIP, KC_PIPE),
    [cmb_TIL] = COMBO(combo_TIL, KC_TILD),
    [cmb_LDR] = COMBO(combo_LDR, QK_LEAD),
    [cmb_CWD] = COMBO(combo_CWD, CW_TOGG),
    [cmb_BSP] = COMBO(combo_BSP, KC_BSPC),
    [cmb_DEL] = COMBO(combo_DEL, KC_DEL),
    [cmb_ESC] = COMBO(combo_ESC, KC_ESC),
    [cmb_PNK] = COMBO(combo_PNK, PANIC),
    [cmb_CPY] = COMBO(combo_CPY, C(KC_C)),
    [cmb_PST] = COMBO(combo_PST, C(KC_V)),
    [cmb_CUT] = COMBO(combo_CUT, C(KC_X)),
    [cmb_MDA] = COMBO(combo_MDA, OSL(_MDA)),
    [cmb_FUN] = COMBO(combo_FUN, OSL(_FUN)),
//     [cmb_ADB] = COMBO(combo_ADB, OSL(_ADB)),
    [cmb_ENT] = COMBO(combo_ENT, KC_ENT),
    [cmb_LPR] = COMBO(combo_LPR, KC_LPRN),
    [cmb_LBR] = COMBO(combo_LBR, KC_LBRC),
    [cmb_RPR] = COMBO(combo_RPR, KC_RPRN),
    [cmb_RBR] = COMBO(combo_RBR, KC_RBRC),
    [cmb_TAB] = COMBO(combo_TAB, KC_TAB),
};


const key_override_t *key_overrides[] = {
    &lprn_override,
    &rprn_override,
    &comm_override,
    &dot_override,
    &ques_override,
    &numdot_override,
};

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWRT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       DF(_STDY),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LPRN,LGUI_T(KC_A),LALT_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F), KC_G,           KC_H,RSFT_T(KC_J),RCTL_T(KC_K),RALT_T(KC_L),RGUI_T(KC_QUOT), KC_RPRN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CW_TOGG,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_QUES,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(_MDA),   LT(_NAV, KC_SPC),  KC_TAB,     QK_REP, NUMWORD, KC_ESC
                                      //`--------------------------'  `--------------------------'
  ),

    [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, A(KC_F4), KC_TRNS, LSA(KC_TAB), A(KC_TAB), KC_TRNS,                      KC_TRNS, KC_BSPC, KC_UP, KC_DEL, KC_INS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL),OSM(MOD_LSFT), KC_TRNS, C(KC_Z), KC_LEFT, KC_DOWN, KC_RIGHT, KC_DEL, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      C(KC_Y), KC_HOME , KC_PGDN, KC_PGUP, KC_END, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_TRNS, KC_7,   KC_8,    KC_9,    KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_4,   KC_5,    KC_6,    KC_TRNS, KC_TRNS, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_RALT), OSM(MOD_RGUI), KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_1,   KC_2,    KC_3,    KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_0,  KC_DOT,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_MDA] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      RM_TOGG, RM_NEXT, KC_VOLU, RM_HUEU, RM_SATU, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL),OSM(MOD_LSFT), KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT, RM_VALU, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_MUTE, KC_MPLY, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

/* Removed until I can get the firmware size down    [_ADB] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL),OSM(MOD_LSFT), KC_TRNS, KC_TRNS, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_RALT), OSM(MOD_RGUI), KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),
*/
    [_FUN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_F12, KC_F7,   KC_F8,    KC_F9,    KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F11, KC_F4,   KC_F5,    KC_F6,    KC_TRNS, KC_TRNS, KC_TRNS, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_RALT), OSM(MOD_RGUI), KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_F10, KC_F1,   KC_F2,    KC_F3,    KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_STDY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       DF(_QWRT),    KC_V,    KC_M,    KC_L,    KC_C,    KC_P,                         KC_B,    QK_AREP,    KC_U,    KC_O,   KC_Q,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LPRN,KC_S,KC_T,KC_R,LSFT_T(KC_D), KC_Y,                                KC_F,RSFT_T(KC_N),KC_E,KC_A,KC_I, KC_RPRN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CW_TOGG,    KC_X,    KC_K,    KC_J,    KC_G,    KC_W,                         KC_Z,    KC_H, KC_QUOT,  KC_QUES, KC_DOT,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(_MDA),   LT(_NAV, KC_SPC),  KC_TAB,     QK_REP, MO(1), KC_ESC
                                      //`--------------------------'  `--------------------------'
  )
};