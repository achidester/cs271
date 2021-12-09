#include "parser.h"
#include "error.h"
#include "symtable.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "hack.h"

void parse(FILE * file){
  char line[MAX_LINE_LENGTH] = {0};

  unsigned int line_num = 0;
  unsigned int instr_num = 0;

  add_predefined_symbols();

  while (fgets(line, sizeof(line), file)){
    line_num += 1;

    if (instr_num > MAX_INSTRUCTIONS) {
      exit_program(EXIT_TOO_MANY_INSTRUCTIONS, MAX_INSTRUCTIONS + 1);
    } 

    strip(line);

    if (!*line){
      continue;
    }

    char inst_type = ' ';
    if (is_Atype(line) == true){
      inst_type = 'A';
    } else if (is_Ctype(line) == true){
      inst_type = 'C';
    } else if (is_label(line) == true){
      if (isalpha(line[0])){
        exit_program(EXIT_INVALID_LABEL, line_num, line);
    } else if (symtable_find(line) != NULL){
        exit_program(EXIT_SYMBOL_ALREADY_EXISTS, line_num, line);
      }
      symtable_insert(line, instr_num);
      continue;

      inst_type = 'L';
      char new_label[MAX_LABEL_LENGTH];
      extract_label(line, new_label);
      printf("%c  %s\n", inst_type, new_label);
      continue;

    }
    

    printf("%c  %s\n", inst_type, line);

    instr_num += 1;
  }
}

char *strip(char *s){
  char s_new[strlen(s) + 1];
  int i = 0;

  for (char *s2 = s; *s2; s2++) {
    if(*s2 == '/' && (*(s2+1) == '/')){
      break;
    } else if (!isspace(*s2)){
      s_new[i++] =*s2;
    }
  }     s_new[i] = "\0";

  strcpy(s, s_new);
  return s;

}


bool is_Atype(const char *line){
  if (line[0] == '@'){
    return true;
  }
  else return false;

}

bool is_label(const char *line){
  if (line[0] == '(' && line[strlen(line) -1])
    return true;
  else return false;

}

bool is_Ctype(const char *line){
  return true;
}

char *extract_label(const char *line, char* label){
  strncpy(label, line +1, strlen(line) - 2);
  return label;
}

void add_predefined_symbols(){
  for(int i= 0, i < NUM_PREDEFINED_SYMBOLS); i++{
    add_predefined_symbols symbol = add_predefined_symbols[i];
    symtable_insert(symbol.name, symbol.address);
  }

}

bool parse_A_instruction(const char *line, a_instruction *instr){
  char *s = (char*) malloc(strlen(line));
  strcopy(s, line+1);
  s_end = NULL;
  long result = strtol(s, &s_end, 10);

  if(s=s_end){

  }else if(*s_end != 0){
    return false
  }else{
    
  }

}
