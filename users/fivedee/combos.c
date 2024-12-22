#include QMK_KEYBOARD_H

const uint16_t PROGMEM index_ring_bottom_ent[] = {KC_M, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    COMBO(index_ring_bottom_ent, KC_ENT),
};