#include <stdio.h>

int main() {
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("Greeting message: %s\n", greeting);

  return 0;
}

/*
  Strings are actually one-dimensional array of characters terminated by a null character '\0'.
 */
