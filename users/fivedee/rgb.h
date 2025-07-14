#pragma once
#include QMK_KEYBOARD_H

bool rgb_matrix_indicators_user(void) {
    rgb_matrix_set_color(44, 0, 191, 111);
    rgb_matrix_set_color(38, 234, 58, 120);
    rgb_matrix_set_color(43, 72, 101, 214);
    rgb_matrix_set_color(46, 244, 48, 62);
    return true;
}