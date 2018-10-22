#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_distinct_char(const char* a) {
  int count = 0;
  int flag = 0;
  for(int i = 0; i < strlen(a); i++) {
    for(int j= 0; j < strlen(a); j++) {
      if(a[i] == a[j] && j != i) {
	flag = 1;
	break;
      }
    }
    if(flag == 0) {
      count += 1;
    }
    flag = 0;
  }
  return count;
}

int distinct_chars(const char *a)
{
    int dist = 0;
   
    while (*a != '\0') {
        if (!strchr(a + 1, *a))
            dist++;
        a++;
    }
    return dist;
}

int main() {
  char *s;
  s = (char *) malloc(1024 * sizeof(char));
  scanf("%s",s);
  s = (char *) realloc(s, strlen(s) + 1);

  printf("My func:%d", count_distinct_char(s));
  printf("Adam func:%d", distinct_chars(s));
  

  
}
