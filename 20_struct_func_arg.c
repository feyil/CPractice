#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

/* function declaration */
void printBook(struct Books book);

int main() {
  struct Books Book1;
  struct Books Book2;

  /* book 1 specification */
  strcpy(Book1.title, "C Programming");
  strcpy(Book1.author, "Nuha Ali");
  strcpy(Book1.subject, "C Programming Tutorial");
  Book1.book_id = 649507;

  /* book 2 specification */
  strcpy(Book2.title, "Telecom Billing");
  strcpy(Book2.author, "Zara Ali");
  strcpy(Book2.subject, "Telecom Billing Tutorial");
  Book2.book_id = 6495700;

  /* print Book1 info */
  printBook(Book1);
  
  /* print Book2 info */
  printBook(Book2);

  return 0;
  
}

void printBook(struct Books book) {
  printf("Book title: %s\n", book.title);
}
