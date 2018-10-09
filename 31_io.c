#include <stdio.h>
int main() {
  char str[100];
  int i;
  printf("str %p\n", str);
  printf("Enter a value:");
  scanf("%s %d", str, &i);

  printf("\nYou entered: %s %d", str,i);

  return 0;
}

/*
  Here, it should be noted that scanf() expects input in the same format as you provided %s and %d which means you have to provide valid inputs like "string integer".
 */
