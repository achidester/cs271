#include <string.h>
#include <stdint.h>

#define NUM_PREDEFINED_SYMBOLS 23

typedef enum symbol_id{
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
}symbol_id;

typedef enum jump_id{
  JMP_INVALID = -1,
  JMP_NULL,
  JGT,
  JEQ,
  JGE,
  JLT,
  JNE,
  JLE,
  JMP,
}jump_id;

typedef enum dest_id{
  DEST_INVALID = -1,
  DEST_NULL,
  M,
  D,
  MD,
  A,
  AM,
  AD,
  AMD,
}dest_id;

typedef enum comp_id{
  COMP_INVALID = -1,
  COMP_0 = 42,
  COMP_1 = 63,
  COMP_neg1 = 58,
  COMP_D = 24,
  COMP_A = 48,
  COMP_notD = 13,
  COMP_notA = 51,
  COMP_negD = 15,
  COMP_negA = 49,
  COMP_Dplus1 = 31,
  COMP_Aplus1 = 55,
  COMP_Dminus1 = 14,
  COMP_Aminus1 = 50,
  COMP_DplusA = 2,
  COMP_DminusA = 19,
  COMP_AminusD = 7,
  COMP_DandA = 0,
  COMP_DorA = 21,
  COMP_M = 48,
  COMP_notM = 51,
  COMP_negM = 49,
  COMP_Mplus1 = 55,
  COMP_Mminus1 = 50,
  COMP_DplusM = 2,
  COMP_DminusM = 19,
  COMP_MinusD = 7,
  COMP_DandM = 0,
  COMP_DorM = 21,
}comp_id;

typedef struct predefined_symbol{
    char name[15];
    int16_t address;

}predefined_symbol;


static const predefined_symbol predefined_symbols[NUM_PREDEFINED_SYMBOLS] = {
    {"R0", SYM_R0}, 
    {"R1", SYM_R1}, 
    {"R2", SYM_R2}, 
    {"R3", SYM_R3},
    {"R4", SYM_R4}, 
    {"R5", SYM_R5},
    {"R6", SYM_R6}, 
    {"R7", SYM_R7},
    {"R8", SYM_R8}, 
    {"R9", SYM_R9},
    {"R10", SYM_R10}, 
    {"R11", SYM_R11},
    {"R12", SYM_R12}, 
    {"R13", SYM_R13},
    {"R14", SYM_R14}, 
    {"R15", SYM_R15},
    {"SYM_SP", SYM_SP},
    {"SYM_LCL", SYM_LCL}, 
    {"SYM_ARG", SYM_ARG},
    {"SYM_THIS", SYM_THIS}, 
    {"SYM_THAT", SYM_THAT},
    {"SYM_SCREEN", SYM_SCREEN}, 
    {"SYM_KBD", SYM_KBD}
};


static inline jump_id str_to_jumpid(const char *s){
  jump_id id = JMP_INVALID;

  if (s == NULL) {
    id = JMP_NULL;
  } else if (strcmp(s, JGT) == 0){
    id = JGT ;
  } else if (strcmp(s, JEQ) == 0){
    id = JEQ;
  } else if (strcmp(s, JGE) == 0){
    id = JGE;
  } else if (strcmp(s, JLT) == 0){
    id = JLT;
  } else if (strcmp(s, JNE) == 0){
    id = JNE;
  } else if (strcmp(s, JLE) == 0){
    id = JLE;
  } else if (strcmp(s, JMP) == 0){
    id = JMP;
  }
  return id;
}