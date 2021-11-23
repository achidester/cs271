#ifndef __ERROR_H__
#define __ERROR_H__

#include <stdarg.h>


enum exitcode {
    EXIT_INCORRECT_ARGUMENTS = 1
};

void exit_program(enum exitcode code, ...);


#endif