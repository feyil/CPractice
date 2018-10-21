#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
  int a;
  int b;
  int c;
};

typedef struct triangle triangle;
void find_minimum2(triangle* tr, double* square, int n) {
  double min = square[0];
  int min_index = 0;
  for(int i = 1; i < n; i++) {
    if(min > square[i]) {
      min = square[i];
      min_index = i;
    }
  }

  double tmp = square[0];
  square[0] = square[min_index];
  square[min_index] = tmp;

  triangle tmp2 = tr[0];
  tr[0] = tr[min_index];
  tr[min_index] = tmp2;
  
}

void find_minimum(triangle* tr, double* square, int n) {
  double min = *(square);
  int min_index = 0;
  for(int i = 1; i < n; i++) {
    if(min > *(square + i)) {
      min = *(square + i);
      min_index = i;
    }
  }

  double tmp = *(square);
  *(square) = *(square + min_index);
  *(square + min_index) = tmp;

  triangle tmp2 = *(tr);
  *(tr) = *(tr + min_index);
  *(tr + min_index) = tmp2;

}


double const calculate_square(triangle* tr) {
  double p = (tr->a + tr->b + tr->c) / 2.0; //2.0 is very important
  double value = (p * (p - tr->a) * (p - tr->b) * (p - tr->c));
  return sqrt(value);
}

void sort_by_area(triangle* tr, int n) {
  double* square_list = (double *) malloc(n * sizeof(double));
  for(int i = 0; i < n; i++) {
    square_list[i] = calculate_square(&tr[i]);
  }
  int counter = n;
  for(int i = 0; i < n; i++) {
    if(counter > 1) {
      find_minimum2(&tr[i], &square_list[i], counter);
    }
    counter -= 1;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  triangle *tr = malloc(n * sizeof(triangle));
  for(int i = 0; i < n; i++) {
    scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
 
  }
  sort_by_area(tr, n);
  for(int i = 0; i < n; i++) {
    printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    printf("%f\n", calculate_square(&tr[i]));
  }

  return 0;
}
