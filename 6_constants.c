#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
#define MYSTRING "Furkan Emre"

int main() {
  int area;

  area = LENGTH * WIDTH;
  printf("value of area : %d", area);
  printf("%s", MYSTRING);
  printf("%c", NEWLINE);
  
  return 0;
}
