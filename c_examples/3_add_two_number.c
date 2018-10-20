#include <stdio.h>

int main() {
  int firstNumber = 0, secondNumber = 0, sumOfTwoNumbers = 0;
  
  printf("Enter two integers: ");
  scanf("%d + %d", &firstNumber, &secondNumber);

  sumOfTwoNumbers = firstNumber + secondNumber;

  printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

  return 0;
}
