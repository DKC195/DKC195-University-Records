// Define a structure named Book with its members: Book(ISBN, title, author, category, pages)
#include <stdio.h>

struct book {
  int isbn;
  char title[40];
  char author[20];
  char category[20];
  int pages;
};

int main() {
  int n;
  printf("Enter the no. Of Books: ");
  scanf("%d", &n);
  struct book p[n];
  for (int i=0; i<n; i++) {
    printf("\nBook %d\n", i+1);
    printf("Enter ISBN: ", p[i].isbn);
    scanf("%d", &p[i].isbn);
    printf("Enter The Title: ");
    scanf("%s",p[i].title);
    printf("Enter %s's The Author: ", p[i].title);
    scanf("%s",p[i].author);
    printf("Enter %s's Category: ", p[i].title);
    scanf("%s", p[i].category);
    printf("Enter %s's No. of Pages: ", p[i].title);
    scanf("%d", &p[i].pages);
  }
  printf("\n\nBooks Details:");
  for (int i=0; i<n; i++) {
    printf("Book %d\n", i+1);
    printf("ISBN: \t\t %d \n", p[i].isbn);
    printf("Title: \t\t %s \n", p[i].title);
    printf("Author: \t %s \n", p[i].author);
    printf("Category: \t %s \n", p[i].category);
    printf("Pages: \t\t %d \n\n", p[i].pages);
  }
  return 0;
}
