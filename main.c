#include <editline/history.h>
#include <editline/readline.h>
#include <stdio.h>
#include <stdlib.h>

static char input[2048];
int main() {
  puts("Lispy Version 0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  while (1) {
    char *input = readline("Lispy -> ");
    add_history(input);
    printf("No you're a %s\n", input);

    free(input);
  }
  return 0;
}
