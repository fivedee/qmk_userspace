#include QMK_KEYBOARD_H
#include "process_records.h"

uint8_t mod_state;

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
    if (!(
    #ifdef USER_NUM_WORD_ENABLE
        process_record_num_word(keycode, record) &&
    #endif
    #ifdef USER_PANIC_ENABLE
        process_record_panic(keycode, record) &&
#endif
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
}