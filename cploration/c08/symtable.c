#include "symtable.h"
#include <stdio.h>

struct Symbol* hashArray[SYMBOL_TABLE_SIZE] = {NULL};
struct Symbol* item;

void symtable_display_table(){
   int i = 0;
	
   for(i = 0; i<SYMBOL_TABLE_SIZE; i++) {
	
      if(hashArray[i] != NULL)
         printf(" (%s,%d)",hashArray[i]->name,hashArray[i]->address);
      else
         printf(" ~~ ");
   }
   printf("\n");
}

unsigned int hash_table(char * key){

    unsigned int hash = SYMBOL_TABLE_SIZE;
    int value;

    while ((value = *key++)){
        hash = ((hash << 5) + hash) + value; 
    }
    return hash % SYMBOL_TABLE_SIZE;
}


struct Symbol *symtable_find(char * key){
    int hashIndex = hash_table(key);

    while (hashArray[hashIndex] != NULL){
        if (hashArray[hashIndex]->name==key)
            return hashArray[hashIndex];
        

        ++hashIndex; 
        hashIndex %=SYMBOL_TABLE_SIZE;
    }
    return NULL;
}

void symtable_insert(char* key, hack_addr addr){

   struct Symbol *item = (struct Symbol*) malloc(sizeof(struct Symbol));
   item->address = addr;  
   item->name = key;

   //get the hash 
   int hashIndex = hash_table(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->name != NULL) {
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SYMBOL_TABLE_SIZE;
   }
	
   hashArray[hashIndex] = item;

}





