#include QMK_KEYBOARD_H
#include "process_records.h"

__attribute__ ((weak))
bool process_record_user_kb(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Runs for each key down or up event.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!(
    #ifdef USER_NUM_WORD_ENABLE
        process_record_num_word(keycode, record) &&
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
                caps_word_off();
            } else {
           }
            break;
         case AR_BEFORE: SEND_STRING(/*b*/"efore"); break;
         case AR_ION: SEND_STRING(/*i*/"on"); break;
         case AR_JUST: SEND_STRING(/*j*/"ust"); break;
         case AR_MENT: SEND_STRING(/*m*/"ent"); break;
         case AR_NION: SEND_STRING(/*n*/"ion"); break;
         case AR_TMENT: SEND_STRING(/*t*/"ment"); break;
         case AR_VER: SEND_STRING(/*v*/"er"); break;
         case AR_WHICH: SEND_STRING(/*w*/"hich"); break;
         case AR_XES: SEND_STRING(/*x*/"es"); break;
         case AR_COMM_BUT: SEND_STRING(/*, */"but"); break;
         case AR_WSPC_THE: SEND_STRING(/* */"the"); break;
         case AR_HASH_INCLUDE: SEND_STRING(/*#*/"include"); break;
         case R_AND: SEND_STRING(/*#*/"include"); break;
         case R_ING: SEND_STRING(/*#*/"include"); break;
         case R_YOU: SEND_STRING(/*#*/"include"); break;
         case R_BECAUSE: SEND_STRING(/*#*/"include"); break;
         case R_WOULD: SEND_STRING(/*#*/"include"); break;
         case R_COMM_AND: SEND_STRING(/*#*/"include"); break;
         case R_WSPC_FOR: SEND_STRING(/*#*/"include"); break;
        }
    return process_record_user_kb(keycode, record);
}