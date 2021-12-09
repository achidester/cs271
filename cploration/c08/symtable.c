#include "symtable.h"
#include <stdio.h>

struct Symbol* hashArray[SYMBOL_TABLE_SIZE] = {NULL};
struct Symbol* item;

unsigned int hash_table(char * key){

    unsigned int hash = SYMBOL_TABLE_SIZE;
    int value;

    while ((value = *key++)){
        hash = ((hash << 5) + hash) + value; 

    return hash % SYMBOL_TABLE_SIZE;
    }

void symtable_insert(char* key, hack_addr addr){

    struct Symbol *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->data = data;  
   item->key = key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }
	
   hashArray[hashIndex] = item;
}


struct Symbol *symtable_find(char * key){
    int index = hashArray(key);

    while (hashArray[index] != NULL){
        if (strncmp(hash_table[index]->name, name, SYMBOL_TABLE_SIZE)==0){
            return hashArray[index];
        }

        ++index
        hashArray %=SYMBOL_TABLE_SIZE;
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

