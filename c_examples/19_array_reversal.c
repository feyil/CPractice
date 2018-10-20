#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, *arr, i;
  scanf("%d", &num);
  arr = (int*) malloc(num * sizeof(int));
  for(i = 0; i < num; i++) {
    scanf("%d", arr + i);
  }

  int value = 0;
  int *tmp = (int*) malloc(num * sizeof(int));

  for(int j = num - 1; j >= 0; j--) {
    tmp[value] = arr[j];
    value += 1;
  }
 
  arr = tmp;
  for(i = 0; i < num; i++) {
    printf("%d ", *(arr + i));
  }

  return 0;
}
