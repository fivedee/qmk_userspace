#include QMK_KEYBOARD_H

__attribute__ ((weak))
void keyboard_post_init_user_kb(void) { }

void keyboard_post_init_user(void) {
    keyboard_post_init_user_kb();
}