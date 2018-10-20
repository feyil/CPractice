#include <stdio.h>

int main() {
  double firstNumber, secondNumber, temporaryVariable;

  printf("Enter first number:");
  scanf("%le", &firstNumber);

  printf("Enter second number:");
  scanf("%le", &secondNumber);

  temporaryVariable = firstNumber;

  firstNumber = secondNumber;

  secondNumber = temporaryVariable;

  printf("\nAfter swapping, firstNumber = %.2f\n", firstNumber);
  printf("After swapping, secondNumber = %.2f", secondNumber);

  return 0;
}
