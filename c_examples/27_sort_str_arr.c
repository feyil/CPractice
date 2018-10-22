#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_distinct_char(const char*);

int lexicographic_sort(const char* a, const char* b) {
  return (strcmp(a,b) > 0) ? (-1) : (1);
  // I am not checking equality condition
}

int lexicographic_sort_reverse(const char* a, const char* b) {
  return (strcmp(a,b) > 0) ? (1) : (-1);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
  if(count_distinct_char(a) > count_distinct_char(b)) {
    return -1;
  }
  else if(count_distinct_char(a) < count_distinct_char(b)) {
    return 1;
  }
  else if(count_distinct_char(a) == count_distinct_char(b)) {
    return (strcmp(a,b) > 0) ? (-1) : (1);
  }
}

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

int sort_by_length(const char* a, const char* b) {
  if(strlen(a) == strlen(b)) {
    return (strcmp(a,b) > 0) ? -1 : 1;
  }
  else {
    return (strlen(a) > strlen(b)) ? -1 : 1;
  }
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
  for(int i = 0; i < len; i++) {
    for(int j = 1 + i; j < len; j++) {
      if(cmp_func(arr[i],arr[j]) == -1) {
	char* tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
      }
    }
  }
}
/*
int main() {
  char *s;
  char *s2;
  s = (char*)malloc(1024 * sizeof(char));
  s2 = (char*) malloc(1024 * sizeof(char));
  scanf("%s",s);
  scanf("%s",s2);
  s = (char*)realloc(s, strlen(s) + 1);
  s2 = (char*)realloc(s2, strlen(s2) + 1);
  printf("Distinct char for s:%d\n", count_distinct_char(s));
  printf("Sort by distinct char:%d\n", sort_by_number_of_distinct_characters(s,s2));
  printf("Sort by length:%d\n", sort_by_length(s,s2));
}
*/
int main() {
  int n;
  scanf("%d", &n);

  char** arr;
  arr = (char**) malloc(n * sizeof(char*));

  for(int i = 0; i < n; i++) {
    *(arr + i) = malloc(1024 * sizeof(char));
    scanf("%s", *(arr + i));
    *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    
  }

  string_sort(arr, n, lexicographic_sort);
  for(int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
  printf("\n");

  string_sort(arr, n, lexicographic_sort_reverse);
  for(int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
  printf("\n");

  string_sort(arr, n, sort_by_length);
  for(int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
  printf("\n");

  string_sort(arr, n, sort_by_number_of_distinct_characters);
  for(int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
  printf("\n");

  return 0;
}

