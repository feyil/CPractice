#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char *s;
  s = malloc(1024 * sizeof(char));
  scanf("%[^\n]", s);
  s = realloc(s, strlen(s) + 1);
  int counter[10] = {0};
  
  for(int i = 0; i < strlen(s); i++) {
    if(isdigit(s[i]) != 0) {
      counter[(s[i] - '0')] += 1;
    }
  }
  for(int i = 0; i < 10; i++) {
    printf("%d ",counter[i]);
  }
  
  free(s);
  return 0;
}
