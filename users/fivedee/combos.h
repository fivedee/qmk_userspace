#pragma once

#include "layers.h"
#include "custom_keycodes.h"

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
const uint16_t PROGMEM combo_BSL[] ={LCTL_T(KC_D), KC_C, COMBO_END};
const uint16_t PROGMEM combo_MNS[] ={LSFT_T(KC_F), KC_V, COMBO_END};
const uint16_t PROGMEM combo_EQL[] ={KC_G, KC_B, COMBO_END};
const uint16_t PROGMEM combo_USC[] ={KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM combo_PLS[] ={RSFT_T(KC_J), KC_M, COMBO_END};
const uint16_t PROGMEM combo_PIP[] ={RCTL_T(KC_K), KC_COMM, COMBO_END};
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
const uint16_t PROGMEM combo_LBR[] ={KC_M, KC_N, COMBO_END};
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
    [cmb_ADB] = COMBO(combo_ADB, OSL(_ADB)),
    [cmb_ENT] = COMBO(combo_ENT, KC_ENT),
    [cmb_LPR] = COMBO(combo_LPR, KC_LPRN),
    [cmb_LBR] = COMBO(combo_LBR, KC_LBRC),
    [cmb_RPR] = COMBO(combo_RPR, KC_RPRN),
    [cmb_RBR] = COMBO(combo_RBR, KC_RBRC),
    [cmb_TAB] = COMBO(combo_TAB, KC_TAB),
};
