#pragma once
#include QMK_KEYBOARD_H

bool process_detected_host_os_user(os_variant_t) {
    switch (os_variant_t) {
        case OS_MACOS:
        case OS_IOS:
            break;
        case OS_WINDOWS:
        case OS_LINUX:
        case OS_UNSURE:
            break;
    }

    return true;
}