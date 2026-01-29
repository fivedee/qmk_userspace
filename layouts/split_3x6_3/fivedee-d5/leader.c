#include QMK_KEYBOARD_H
#include "leader-secret.h"

void leader_start_user(void) {
    // Crickets...
}

void leader_end_user(void) {
    // Emails
    if (leader_sequence_two_keys(KC_G, KC_M)) {
        SEND_STRING(GMAIL);
    } else if (leader_sequence_three_keys(KC_G, KC_M, KC_A)) {
        SEND_STRING(ALTGMAIL);
    } else if (leader_sequence_two_keys(KC_O, KC_L)) {
        SEND_STRING(OUTLOOK);
    } else if (leader_sequence_two_keys(KC_B, KC_C)) {
        SEND_STRING(SCHOOL);
    // Desktop
    } else if (leader_sequence_one_key(KC_D)) {
        tap_code16(LGUI(KC_D));
    //Close Window
    } else if (leader_sequence_one_key(KC_Q)) {
        if (detected_host_os() == OS_MACOS || detected_host_os() == OS_IOS) {
            tap_code16(LGUI(KC_W));
        } else {
            tap_code16(LALT(KC_F4));
        }
    }
}