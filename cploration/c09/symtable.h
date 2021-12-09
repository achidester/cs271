#ifndef __SYMTABLE_H__
#define __SYMTABLE_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define SYMBOL_TABLE_SIZE 10000
typedef int16_t hack_addr;

typedef struct Symbol{
    hack_addr address;
    char *name;
}Symbol;



struct Symbol* hashArray[SYMBOL_TABLE_SIZE];
int hash(char *str);
struct Symbol *symtable_find(char * key);
void symtable_insert(char* key, hack_addr addr);
void symtable_display_table();


#endif