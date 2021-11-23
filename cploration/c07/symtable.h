#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define SYMBOL_TABLE_SIZE 100
typedef int16_t hack_addr;

typedef struct{
    hack_addr address;
    char* name;
}Symbol;



Symbol* hashArray[SYMBOL_TABLE_SIZE]
int hash(char *str);
struct Symbol *find(char * key);
void insert(char* key, hack_addr addr);
void display_table();



