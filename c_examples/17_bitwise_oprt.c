#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void updateMax(int*, int, int);

void calculate_the_maximum(int n, int k) {
  int max_and = 0;
  int max_or = 0;
  int max_xor = 0;

  for(int i = 1; i < n; i++) {

    for(int j = i + 1; j <= n; j++) {

      updateMax(&max_and, (i & j), k);
      updateMax(&max_or, (i | j), k);
      updateMax(&max_xor, (i ^ j), k);
    }
  }  
  printf("%d\n%d\n%d",max_and, max_or, max_xor); 
}

void updateMax(int *max, int n, int k) {
  if(n < k && n > *max ) {
    *max = n;
  }
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n,k);
 
  
  return 0;
}
