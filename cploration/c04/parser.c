#include "parser.h"

extern int MAX_LINE_NUMBER;

void parse(FILE * file){
  char line[200];

    while (fgets(line, sizeof(line), file)){
      strip(line);
      if (line == NULL) continue;
      printf("%s", line);

    }
}

  char * strip(char *s){

    char s_new[sizeof(s)+1];
    int i = 0;

    for (char *s2 = s; *s2; s2++) {
      if(s2[0] == '/' && s2[1] == '/'){
        break;
      }
      else if (!isspace(*s2)){
        s_new[i++] =*s2;
      }
    }
    s_new[i] = '\0';

    strcpy(s, s_new);
    return s;

  }
