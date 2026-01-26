// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "combos.h"
#include "layers.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ESC│ C │ K │ W │ Y │       │ Y │ B │ F │ G │BSP│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │SPC│ E │ T │ R │ V │       │ J │ L │ N │ E │SPC│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │CWD│ S │ D │ M │TAB│       │TAB│ H │ P │ S │ENT│
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │ U ├───┐   ┌───┤ O │
      *               └───┤ I │   │ A ├───┘
      *                   └───┘   └───┘
      */
    [_TOP] = LAYOUT_split_3x5_2(
        KC_ESC,  KC_C,            KC_K,            KC_W,            KC_Y,                               KC_Y,    KC_B,            KC_F,            KC_G,            KC_BSPC,
        KC_SPC,  LALT_T(KC_E),    LCTL_T(KC_T),    LGUI_T(KC_R),    KC_V,                               KC_J,    RGUI_T(KC_L),    RCTL_T(KC_N),    RALT_T(KC_E),    KC_SPC,
        CW_TOGG, KC_S,            KC_D,            KC_M,            KC_TAB,                             KC_TAB,  KC_H,            KC_P,            KC_S,            KC_ENT,
                                             LSFT_T(KC_U),  LT(_NUM, KC_I),                             LT(_SYM, KC_A),  RSFT_T(KC_O)
    ),
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │XXX│ & │ % │ ^ │BSP│       │BSP│ = │ + │ * │XXX│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │SPC│ { │ [ │ ( │TAB│       │ENT│ ) │ ] │ } │SPC│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │XXX│ ! │ # │ < │XXX│       │XXX│ > │ $ │ \ │XXX│
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │TOP├───┐   ┌───┤ULK│
      *               └───┤NUM│   │LCK├───┘
      *                   └───┘   └───┘
      */
    [_SYM] = LAYOUT_split_3x5_2(
        KC_TRNS,  KC_AMPR,  KC_PERC,  KC_CIRC,  KC_BSPC,                             KC_BSPC,  KC_EQL,  KC_PLUS,    KC_ASTR,   KC_TRNS,
        KC_SPC,   KC_LCBR,  KC_LBRC,  KC_LPRN,  KC_TAB,                              KC_ENT,   KC_RPRN, KC_RBRC,    KC_RCBR,   KC_SPC,
        KC_TRNS,  KC_EXLM,  KC_HASH,  KC_LT,    KC_TRNS,                             KC_TRNS,  KC_GT,   KC_DLR,     KC_BSLS,   KC_TRNS,
                                   OSL(_TOP),  OSL(_NUM),                            QK_LLCK,    MO(_SYM)
    ),
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │XXX│ 7 │ 8 │ 9 │BSP│       │BSP│ 9 │ 8 │ 7 │XXX│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ 0 │ 4 │ 5 │ 6 │TAB│       │ENT│ 6 │ 5 │ 4 │ 0 │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │XXX│ 1 │ 2 │ 3 │XXX│       │XXX│ 3 │ 2 │ 1 │XXX│
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │LCK├───┐   ┌───┤TOP│
      *               └───┤ULK│   │SYM├───┘
      *                   └───┘   └───┘
      */
    [_NUM] = LAYOUT_split_3x5_2(
        KC_TRNS,  KC_7,  KC_8,  KC_9,  KC_BSPC,                             KC_BSPC,  KC_EQL,  KC_PLUS,    KC_ASTR,   KC_TRNS,
        KC_0,     KC_4,  KC_5,  KC_6,  KC_TAB,                              KC_ENT,   KC_RPRN, KC_RBRC,    KC_RCBR,   KC_SPC,
        KC_TRNS,  KC_1,  KC_3,  KC_3,  KC_TRNS,                             KC_TRNS,  KC_GT,   KC_DLR,     KC_BSLS,   KC_TRNS,
                            QK_LLCK,  MO(_NUM),                             OSL(_SYM),    OSL(_TOP)
    ),
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │XXX│ _ │ " │ : │XXX│       │XXX│ : │ " │ _ │XXX│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ESC│ - │ ' │ ; │XXX│       │XXX│ ; │ ' │ - │ESC│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │XXX│ / │ . │ , │XXX│       │XXX│ , │ . │ / │XXX│
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │XXX├───┐   ┌───┤XXX│
      *               └───┤XXX│   │XXX├───┘
      *                   └───┘   └───┘
      */
    [_PUN] = LAYOUT_split_3x5_2(
        KC_TRNS,  KC_UNDS,  KC_DQT,  KC_COLN,  KC_TRNS,                             KC_TRNS,  KC_COLN,  KC_DQT,  KC_UNDS,   KC_TRNS,
        KC_ESC,   KC_MINS,  KC_QUOT, KC_SCLN,  KC_TRNS,                             KC_TRNS,  KC_SCLN,  KC_QUOT,  KC_MINS,  KC_ESC,
        KC_TRNS,  KC_SLSH,  KC_DOT,  KC_COMM,  KC_TRNS,                             KC_TRNS,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_TRNS,
                                     KC_TRNS,  KC_TRNS,                             KC_TRNS,  KC_TRNS
    ),
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │XXX│MS3│MS2│MS1│XXX│       │XXX│ ` │ ~ │ @ │XXX│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │INS│PgU│ L │ U │XXX│       │XXX│ U │ L │Hme│INS│
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │XXX│PgD│ R │ D │XXX│       │XXX│ D │ R │End│XXX│
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │XXX├───┐   ┌───┤XXX│
      *               └───┤XXX│   │XXX├───┘
      *                   └───┘   └───┘
      */
    [_NAV] = LAYOUT_split_3x5_2(
        KC_TRNS,  MS_BTN3,  MS_BTN2, MS_BTN1,  KC_TRNS,                             KC_TRNS,  KC_GRV,   KC_TILD,  KC_AT,    KC_TRNS,
        KC_INS,   KC_PGUP,  KC_LEFT, KC_UP,    KC_TRNS,                             KC_TRNS,  KC_SCLN,  KC_QUOT,  KC_MINS,  KC_INS,
        KC_TRNS,  KC_PGDN,  KC_RGHT, KC_DOWN,  KC_TRNS,                             KC_TRNS,  KC_COMM,  KC_DOT,   KC_SLSH,  KC_TRNS,
                                     KC_TRNS,  KC_TRNS,                             KC_TRNS,  KC_TRNS
    )
};
