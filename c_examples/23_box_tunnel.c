#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGTH 41

struct box
{
  int length;
  int width;
  int heigth;
};

typedef struct box box;

int get_volume(box b) {
  return (b.length * b.width * b.heigth);
}

int is_lower_than_max_heigth(box b) {
  return (b.heigth < MAX_HEIGTH) ? 1 : 0;
}

int main() {
  int n;
  scanf("%d", &n);
  box *boxes = malloc(n * sizeof(box));
  for(int i = 0; i < n; i++) {
    scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].heigth);
  }
  for(int i = 0; i < n; i++) {
    if(is_lower_than_max_heigth(boxes[i])) {
      printf("%d\n", get_volume(boxes[i]));
    }
  }

    return 0;
}

 
