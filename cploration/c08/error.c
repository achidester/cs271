#include "error.h"


const char *error_messages[] = 
{
    [EXIT_INCORRECT_ARGUMENTS] = "Usage: %s [filename]",


};

void exit_program(enum exitcode code, ...)
{
    va_list argruments;
    va_start (argruments, code);

    printf("ERROR: ");
    vfprintf(stdout, error_messages[code], argruments);
    printf('\n');

    va_end(argruments);
    exit(code);

}