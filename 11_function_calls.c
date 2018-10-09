#include <stdio.h>

/* function declarition */
int max(int num1, int num2);

int main() {
  /* local variable definition */
  int a = 109;
  int b = 200;
  int ret;

  /* calling a function to get max value */
  ret = max(a, b);

  printf("Max values is: %d\n", ret);

  return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2) {

  /* Local variable declration */
  int result;

  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}
