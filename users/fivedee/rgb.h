#pragma once
#include QMK_KEYBOARD_H

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    rgb_matrix_set_color(index, red, green, blue);
    return true;
}