#pragma once
#include QMK_KEYBOARD_H


bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
        case LSFT_T(KC_D):
        case RSFT_T(KC_N):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record, 
                           uint16_t prev_keycode) {
    if (is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode)) {
        switch (keycode) {
            case LSFT_T(KC_F):
            case RSFT_T(KC_J):
            case LSFT_T(KC_D):
            case RSFT_T(KC_N):
                return FLOW_TAP_TERM - 50; // Reduce flow tap on shift keys by 50ms.
            
            default:
                return FLOW_TAP_TERM;
        }
    }
    return 0;
}