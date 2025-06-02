#include QMK_KEYBOARD_H
#include "process_records.h"

uint8_t mod_state;


__attribute__ ((weak))
bool process_record_user_kb(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Returning true here will cause QMK to continue handling the key normally.
    // Returning false indicates that we've handled everything the keycode should do, and QMK
    // should not continue handling the keypress.
    //
    // NOTE: There is also a process_record_kb function that can be defined in the keyboard-
    // specific code. This allows the keyboard to have its own process_record function.
    // This is supposed to be "higher" than the user function, meaning the kb function
    // is shared for all keymaps for the keyboard.
    //
    // For this reason, I add my own function, called process_record_user_kb, and at the end
    // of this function, I defer to that one if it exists.
    // return process_record_user(keycode, record);


    // Custom keycode / function handling, based on the core function
    // process_record_quantum
    // https://github.com/qmk/qmk_firmware/blob/master/quantum/quantum.c
    if (!(
    process_record_num_word(keycode, record) &&
    true)) {
        return false;
    }
    return process_record_user_kb(keycode, record);
}