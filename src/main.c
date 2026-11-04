/* Sadaf (صدف) - Adding REPL loop and prompt and other stuff*/
#define _POSIX_C_SOURCE 200809L 

#include <stdio.h> // includes: getline(), printf(), fputs(), fflush()
#include <stdlib.h> // includes: free()
#include <string.h> // includes: strcmp()
#include <unistd.h> // includes: isatty(), STDIN_FILENO

#define PROMPT "sadaf> "

int main (void)
{
    char *line = NULL;
    size_t cap = 0;
    ssize_t len;
    int interactive = isatty(STDIN_FILENO);

    for (;;) {
        if (interactive){
            fputs(PROMPT, stdout);
            fflush(stdout);
        }
        len = getline (&line, &cap, stdin);
        if (len == -1) {
            if (interactive){
             putchar('\n');
             break;
            }
        }
        if (len > 0 && line[len - 1] == '\n')
        line[--len] = '\0';

        if (strcmp(line, "exit") == 0)
        break;
    }
    free(line);
    return 0; // Return success finally. Thank god it worked.
}
