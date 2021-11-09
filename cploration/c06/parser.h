#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LINE_LENGTH 200
#define MAX_LABEL_LENGTH = MAX_LINE_LENGTH - 2

char *strip(char *s);

void parse(FILE * file);

bool is_Atype(const char *line);

bool is_label(const char *line);

bool is_Ctype(const char *line);
