#include <stdio.h>

int main() {
  int c;

  printf("Enter a value: ");
  c = getchar();
  printf("C is %d\n",c);
  printf("\nYou entered:");
  putchar(c);

  return 0;
}
