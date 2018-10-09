#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

/* function declaration */
void printBook(struct Books *book);

int main() {
  struct Books Book1;
  struct Books Book2;

  /* book1 specification */
  strcpy(Book1.title, "C Programming");
  Book1.book_id = 6495407;

  /* book2 specification */
  strcpy(Book2.title, "Telecom Billing");
  Book2.book_id = 6495700;

  /* print Book1 info by passing address of Book1 */
  printBook(&Book1);

  /* print Book2 info by passing address of Book2 */
  printBook(&Book2);

  return 0;
}

void printBook(struct Books *book) {
  printf("Book title: %s\n", book->title);
  printf("Book book_id: %d\n", book->book_id);
}
