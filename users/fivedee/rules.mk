# Copyright 2019 Manna Harbour
# https://github.com/manna-harbour/miryoku

MOUSEKEY_ENABLE = no # Turned off to save space
EXTRAKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = no # Turned off to save space
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

INTROSPECTION_KEYMAP_C = manna-harbour_miryoku.c # keymaps

include $(USER_PATH)/custom_rules.mk

include $(USER_PATH)/post_rules.mk
