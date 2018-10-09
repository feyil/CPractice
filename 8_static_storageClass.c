#include <stdio.h>

/* function declaration */
void func(void);

static int count = 5; /* global variable */

int main() {
  while(count--) {
    func();
  }

  return 0;
}

/* function definition */
void func(void) {
  static int i = 5; /* local static variable */
  i++;

  printf("i is %d and count is %d\n", i, count);

}
/*

The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating adn destroying it each time it comes into and goes out of scope. Therefore, making local variables tatic allows them to maintain their values between function calls.

 */
