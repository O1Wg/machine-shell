#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *line = NULL;
    size_t cap = 0;

    while (1) {
      printf("sadaf> ");
      fflush(stdout);

      if(getline(&line , &cap, Stdin) == -1) {
       printf("\n")
       break;
     }
    line[strcspn(line,   "\n")] = '\0';

    if (strcmp(line,  "exit")  == '\0') break;
    if (line[0] == '\0') continue;

    printf("you typed: %s\n",  line);
    } 
   free(line);
   return 0;
}
