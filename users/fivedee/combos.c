#include QMK_KEYBOARD_H

const uint16_t PROGMEM 26_28_ent[] = {K26, K28, COMBO_END};

combo_t key_combos[] = {
    COMBO(26_28_ent, KC_ENT),
};