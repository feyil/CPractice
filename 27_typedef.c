#include <stdio.h>
#include <string.h>

typedef struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
} Book;

int main() {
  Book book;

  strcpy(book.title, "C Programming");
  book.book_id = 6495407;

  printf("Book title: %s\n", book.title);
  printf("Book book_id : %d\n", book.book_id);

  return 0;
}
