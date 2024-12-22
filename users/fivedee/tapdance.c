#include QMK_KEYBOARD_H

enum td_keycodes {
    SFT_SYM,
};

typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_SINGLE_TAP,
} td_state_t;

static td_state_t td_state;

td_state_t cur_dance(tap_dance_state_t *state);

void sfs_finished(tap_dance_state_t *state, void *user_data);
void sfs_reset(tap_dance_state_t *state, void *user_data);

// Determine the tapdance state to return
td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    }

    if (state->count == 2) return TD_DOUBLE_SINGLE_TAP;
    else return TD_UNKNOWN; // Any number higher than the maximum state value you return above
}

void sfs_finished(tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
            add_oneshot_mods(MOD_BIT(KC_LSFT));
            break;
        case TD_SINGLE_HOLD:
            layer_on(U_SYM);
            break;
        case TD_DOUBLE_SINGLE_TAP:
            caps_word_toggle();
            break;
        default:
            break;
    }
}

void sfs_reset(tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_SINGLE_TAP:
            // Crickets...
            break;
        case TD_SINGLE_HOLD:
            layer_off(U_SYM);
            break;
        case TD_DOUBLE_SINGLE_TAP:
            // Crickets...
            break;
        default:
            break;
    }
}