#include QMK_KEYBOARD_H
#include "process_records.h"

__attribute__ ((weak))
bool process_record_user_kb(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!(
        process_record_num_word(keycode, record) &&
    true)) {
        return false;
    }
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
    return process_record_user_kb(keycode, record);
}