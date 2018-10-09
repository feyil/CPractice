#include <stdio.h>

int main() {
  FILE *fp;

  fp = fopen("tmp/test.txt","w+");

  printf("fp %p",fp);

  fprintf(fp, "This is testing for fprint.. \n");
  fputs("This is testing for fputs.. \n", fp);
  fclose(fp);
  printf("hayy");
  
  return 0;
}
