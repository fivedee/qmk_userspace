#include QMK_KEYBOARD_H

uint16_t osm_timer = 0;

enum {
    SFT_SYM
};

void sfs_td(tap_dance_state_t *state, void *user_data) {
    if (state->pressed && !state->interrupted) {
        layer_on(U_SYM);
    } else {
        int i;
        for (i = 0; i < state->count; i++) {
            add_oneshot_mods(MOD_BIT(KC_LSFT));
            osm_timer = timer_read();
        }
    }
};

void sfs_rst(tap_dance_state_t *state, void *user_data) {
    if (layer_state_is(U_SYM)) {
        layer_off(U_SYM);
    } else {
        // Crickets...
    }
}

void matrix_scan_user(void) {
    if (timer_elapsed(osm_timer) > ONESHOT_TIMEOUT) {
        del_oneshot_mods(MOD_BIT(KC_LSFT));
    }
}