#pragma once
#include QMK_KEYBOARD_H
#include "custom_keycodes.h"

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_A: return KC_O;
        case KC_B: return AR_BEFORE;
        case KC_C: return KC_Y;
        case KC_D: return KC_Y;
        case KC_E: return KC_U;
        case KC_G: return KC_Y;
        case KC_I: return AR_ION;
        case KC_J: return AR_JUST;
        case KC_K: return KC_S;
        case KC_L: return KC_K;
        case KC_M: return AR_MENT;
        case KC_N: return AR_NION;
        case KC_O: return KC_A;
        case KC_P: return KC_Y;
        case KC_R: return KC_L;
        case KC_S: return KC_K;
        case KC_T: return AR_TMENT;
        case KC_U: return KC_E;
        case KC_V: return AR_VER;
        case KC_W: return AR_WHICH;
        case KC_X: return AR_XES;
        case KC_Y: return KC_P;
        case KC_COMM: return AR_COMM_BUT;
        case KC_DOT: return KC_BSLS;
        case KC_MINS: return KC_GT;
        case KC_EQL: return KC_GT;
        case KC_SPC: return AR_WSPC_THE;
        case KC_TAB: return AR_WSPC_THE;
        case KC_ENT: return AR_WSPC_THE;
        case KC_QUOT: return AR_WSPC_THE;
        case KC_LPRN: return AR_WSPC_THE;
        case KC_HASH: return AR_HASH_INCLUDE;
    }

    return KC_TRNS;
}

uint16_t get_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_A: return R_AND;
        case KC_I: return R_ING;
        case KC_Y: return R_YOU;
        case KC_N: return KC_F;
        case KC_B: return R_BECAUSE;
        case KC_W: return R_WOULD;
        case KC_COMM: return R_COMM_AND;
        case KC_SPACE: return R_WSPC_FOR;
        case KC_TAB: return R_WSPC_FOR;
        case KC_ENT: return R_WSPC_FOR;
        case KC_QUOT: return R_WSPC_FOR;
        case KC_LPRN: return R_WSPC_FOR;
    }

    return KC_TRNS;
}