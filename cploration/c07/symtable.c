#include "symtable.h"

unsigned long
    hash_table(char *str)
    {
        unsigned long hash = SYMBOL_TABLE_SIZE;
        int value;

        while (value = *str++)
            hash = ((hash << 5) + hash) + value; 

        return hash_table ;
    }

bool insert(value *v, hack_addr addr){


    if(v == NULL) return false;
    int index = hash(p->name);
    if(hash_table[index] = v;
    return true;
}



void hash_search(char* key){
    int index = hash(key);

    if (hash[index] != NULL )&&
        strncmp(hash_table[index]->name, name, SYMBOL_TABLE_SIZE)==0){
            return hash_table[index];
        }
}

void display_table(){
    printf("Start\n");
    for (int=0; i < SYMBOL_TABLE_SIZE; i++){
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
            printf("\n");
        }
    printf("END\n");
    }
}

