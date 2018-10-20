#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int first_digit(int n);

int main() {
  int n;
  int digit = 4;
  int sum = 0;
  
  scanf("%d", &n);
  sum += n % 10;
  while(digit > 0) {
    if(n >= pow(10,digit)) {

      int result = first_digit(n);
     
      n = n - (result * pow(10,digit));
     
      digit = digit - 1;
      sum += result;
      }
    else {
      digit = digit - 1;
    }
    
  }
  printf("%d\n", sum);
  return 0;
}

int first_digit(int n) {

  while(n >= 10) {
    n = n / 10;
  }
 
  return n;
}

