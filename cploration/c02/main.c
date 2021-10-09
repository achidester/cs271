#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 100

/** WARMUP **/
// declare a string with value
int main(){

    char hello[] = "Hello";

    // declare an empty string
    char name[MAX_LIMIT];

    // prompt user
    printf("What is your name? ");

    // read in a string from user and save in variable
    // [^\n] means to discard the newline character
    scanf("%[^\n]s", name);

    // print out "hello <name>"
    printf("%s %s!\n\n", hello, name);

    /** Exercise 1 **/

    char welcome[MAX_LIMIT];
    int i;

    for (i=0; hello[i] != '\0'; i++)
    {
        welcome[i] = hello[i];
    }
    strcat(welcome, " ");
    strcat(welcome, name);
    printf("%s!\n", welcome);

    /** Exercise 2 **/
    int N = strlen(name);
    printf("%s %d %s\n", "Your name is", N , "characters long");


    /** Exercise 3 **/
    char prof[8] = {'P','a','t','r','i','c','k','\0'};

    int result = strcmp(name, prof);

    if(result < 0){
        printf("%s, %s, %s\n", name, "is before", prof);
    }
    else if(result ==0 ){
        printf("%s, %s, %s\n", name, "is", prof);
    }
    else{
        printf("%s, %s, %s\n", prof, "is before", name);
    }


    return 0;
}
