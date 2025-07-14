#pragma once
#include QMK_KEYBOARD_H

const key_override_t lprn_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_LPRN, KC_LT, (1<<_QWRT | 1<<_STDY));
const key_override_t rprn_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_RPRN, KC_GT, (1<<_QWRT | 1<<_STDY));
const key_override_t comm_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_COMM, KC_SCLN, (1<<_QWRT | 1<<_STDY));
const key_override_t dot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COLN, (1<<_QWRT | 1<<_STDY));
const key_override_t ques_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUES, KC_EXLM, (1<<_QWRT | 1<<_STDY));
const key_override_t numdot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COMM, 1<<_NUM);

const key_override_t *key_overrides[] = {
    &lprn_override,
    &rprn_override,
    &comm_override,
    &dot_override,
    &ques_override,
    &numdot_override,
};