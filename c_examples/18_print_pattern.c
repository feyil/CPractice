#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  int counter = 1;
  scanf("%d", &n);
  int k = n;

  int m = n;
  int x = 2;
  int y = n;
  int z = 2;
  int o = 1;
  int b = n;
  
  for(int i = 1; i < (n * 2); i++) {

    if(i != 1 && i != (n * 2) -1) {
      for(int l = 1; l < x; l++) {
	printf("%d ", m);
	m = m - 1;
      }
      m = n;
      if(counter == 1 && x != n) {
	x += 1;
      }
      else {
	x -= 1;
      }
    }
    
    for(int j = 1; j < (k * 2); j++) {
      printf("%d ",k);
    }

    if(k == 1 || counter == 2) {
      k = k + 1;
      counter = 2;
    }
    else {
      k = k - 1;
    }

    if(i != 1 && i != (n * 2) -1) {
      y = b;
      for(int l = 1; l < z; l++) {
	printf("%d ",y);
	y = y + 1;
      }
      y = b;
      if(counter == 1 && z != n) {
	z += 1;
	b -= 1;
      }
      else {
	z -= 1;
	b += 1;
      }
    }
       
    printf("\n");
  }
 
  return 0;
}
