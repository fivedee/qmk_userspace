INTROSPECTION_KEYMAP_C = fivedee.c

ifeq ($(strip $(USER_NUM_WORD_ENABLE)), yes)
	SRC += features/num_word.c
    OPT_DEFS += -DUSER_NUM_WORD_ENABLE
endif

SRC += process_records.c
SRC += leader.c