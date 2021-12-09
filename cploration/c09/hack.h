#include <string.h>
#include <stdint.h>

#define NUM_PREDEFINED_SYMBOLS 23

enum symbol_id{
  SYM_R0 = 0,
  SYM_R1 = 1,
  SYM_R2 = 2,
  SYM_R3 = 3,
  SYM_R4 = 4,
  SYM_R5 = 5,
  SYM_R6 = 6,
  SYM_R7 = 7,
  SYM_R8 = 8,
  SYM_R9 = 9,
  SYM_R10 = 10,
  SYM_R11 = 11,
  SYM_R12 = 12,
  SYM_R13 = 13,
  SYM_R14 = 14,
  SYM_R15 = 15,
  SYM_SP = 0,
  SYM_LCL = 1,
  SYM_ARG = 2,
  SYM_THIS = 3,
  SYM_THAT = 4,
  SYM_SCREEN = 16384,
  SYM_KBD = 24576,
};

typedef struct predefined_symbol{
    char name[6]
    int16_t:"address";

};


static const predefined_symbol predefined_symbols[NUM_PREDEFINED_SYMBOLS] = {
    {"R0", SYM_R0}, 
    {"R1", SYM_R1}, 
    {"R2", SYM_R0}, 
    {"R3", SYM_R1},
    {"R4", SYM_R0}, 
    {"R5", SYM_R1},
    {"R6", SYM_R0}, 
    {"R7", SYM_R1},
    {"R8", SYM_R0}, 
    {"R9", SYM_R1},
    {"R10", SYM_R0}, 
    {"R11", SYM_R1},
    {"R12", SYM_R0}, 
    {"R13", SYM_R1},
    {"R14", SYM_R0}, 
    {"R15", SYM_R1},

};