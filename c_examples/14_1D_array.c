#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int sum = 0;
  int count = 0;
  scanf("%d",&count);

  int *arr = (int*)malloc(count * sizeof(int));

  for(int i = 0; i < count; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  
  printf("%d",sum);
  
  return 0;
}
