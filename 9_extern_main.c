#include <stdio.h>

int count;
extern void write_extern();

int main() {
  count = 5;
  write_extern();
}

/*
  The extern modifier is most commonly used when there are two or more files sharing the same global variables or functions as explained below
 */
