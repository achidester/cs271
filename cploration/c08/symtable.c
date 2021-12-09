#include "symtable.h"
#include <stdio.h>

struct Symbol* hashList[SYMBOL_TABLE_SIZE] = {NULL}
struct Symbol* item;

unsigned long hash_table(char *key){

    unsigned long hash = SYMBOL_TABLE_SIZE;
    int value;

    while (value = *str++)
        hash = ((hash << 5) + hash) + value; 

    return hash_table % SYMBOL_TABLE_SIZE;
    }

void symtable_insert(char* key, hack_addr addr){

    if(v == NULL) return false; 
    int index = hash(v->name);
    if(hash_table[index] = v) return true;
}



void Symbol *symtable_find(char * key){
    int index = hashList(key);

    while (hashList[index] != NULL){
        if (strncmp(hash_table[index]->name, name, SYMBOL_TABLE_SIZE)==0){
            return hashList[index];
        }

        ++index
        hashList %=SYMBOL_TABLE_SIZE;
    }
    return NULL;
}

void symtable_display_table(){
    printf("Start\n");
    
    for (int i=0; i < SYMBOL_TABLE_SIZE; i++){
        if (hash_table[i]==NULL){
            printf("\t%i\t___\n", i);
        }
        else{
            printf("\t%i\t ", i);
            value *tmp = hash_table[i];
            while(tmp != NULL){
                printf ("%s - ", hash_table[tmp->value]);
                tmp = tmp -> next;
            }
        }
    printf("\n");
    }
}

