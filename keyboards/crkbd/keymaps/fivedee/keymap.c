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
#include "custom_keycodes.h"
#include "layers.h"
#include "combos.h"
#include "features/num_word.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case PANIC:
        if (record->event.pressed) {
            clear_oneshot_mods();
            reset_oneshot_layer();
            layer_clear();
        } else {
        }
        break;
    }
    return true;
};

const key_override_t lprn_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LT);
const key_override_t rprn_override = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_GT);
const key_override_t comm_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_SCLN);
const key_override_t dot_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLN);
const key_override_t ques_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_EXLM);


const key_override_t *key_overrides[] = {
    &lprn_override,
    &rprn_override,
    &comm_override,
    &dot_override,
    &ques_override,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWRT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       DF(_STDY),    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LPRN,LGUI_T(KC_A),LALT_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F), KC_G,           KC_H,RSFT_T(KC_J),RCTL_T(KC_K),RALT_T(KC_L),RGUI_T(KC_QUOT), KC_RPRN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CW_TOGG,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_QUES,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(_MDA),   LT(_NAV, KC_SPC),  QK_REP,     NUMWORD, OSM(MOD_LSFT), MO(_ADB)
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
                                          KC_TRNS, KC_0,  KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
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

    [_ADB] = LAYOUT_split_3x6_3(
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
       DF(_QWRT),    KC_V,    KC_M,    KC_L,    KC_C,    KC_P,                         KC_Q,    KC_F,    KC_O,    KC_U,   KC_J,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LPRN,KC_S,KC_T,KC_R,KC_D, KC_Y,           KC_DOT,KC_N,KC_A,KC_E,KC_I, KC_RPRN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CW_TOGG,    KC_Z,    KC_K,    KC_Q,    KC_G,    KC_W,                         KC_B,    KC_H, KC_QUOT,  KC_SCLN, KC_COMM,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(_MDA),   LT(_NAV, KC_SPC),  KC_BSPC,        NUMWORD, OSM(MOD_LSFT), MO(_ADB)
                                      //`--------------------------'  `--------------------------'
  )
};