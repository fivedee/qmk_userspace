#pragma once
#include QMK_KEYBOARD_H

const key_override_t lprn_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_LPRN, KC_LT, (1<<_QWRT | 1<<_GRA));
const key_override_t rprn_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_RPRN, KC_GT, (1<<_QWRT | 1<<_GRA));
const key_override_t quot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOT, KC_UNDS, 1<<_GRA);
const key_override_t dot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_GT, 1<<_GRA);
const key_override_t mins_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_MINS, KC_DQT, 1<<_GRA);
const key_override_t slsh_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_SLSH, KC_LT, 1<<_GRA);
const key_override_t numdot_override = ko_make_with_layers(MOD_MASK_SHIFT, KC_DOT, KC_COMM, 1<<_NUM);

const key_override_t *key_overrides[] = {
    &lprn_override,
    &rprn_override,
    &quot_override,
    &dot_override,
    &mins_override,
    &slsh_override,
    &numdot_override,
};