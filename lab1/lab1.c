#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

  char *line = NULL;
  size_t n = 0;
  ssize_t num;

  printf("Please Enter Some text:");
  while ((num = getline(&line, &n, stdin)) != -1) {

    char *saveptr = NULL;

    printf("Tokens:\n");
    char *token = strtok_r(line, " ", &saveptr);

    while (token != NULL) {
      printf("%s\n", token);
      token = strtok_r(NULL, " ", &saveptr);
    }
    printf("Please Enter Some text:");
  }
  free(line);

  return 0;
}
