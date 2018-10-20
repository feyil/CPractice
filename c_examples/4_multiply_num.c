#include <stdio.h>

int main() {
  double firstNumber = 0;
  double secondNumber = 0;
  double product = 0;

  printf("Enter two numbers: ");
  scanf("%lf %lf", &firstNumber, &secondNumber);

  product = firstNumber * secondNumber;

  printf("Product = %.2lf", product);

  return 0;
}
