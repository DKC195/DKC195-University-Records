// Define a structure named Author with its members: Author(id, name, contact. email, gender)
#include <stdio.h>

struct author{
  int id;
  char name[20];
  int contact;
  char email[60];
  char gender[2];
};

int main() {
  int n;
  printf("Enter the no. Of Author: ");
  scanf("%d", &n);
  struct author p[n];
  for (int i=0; i<n; i++) {
    printf("\nAuthor %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
    printf("Enter %s's Email: ", p[i].name);
    scanf("%s", p[i].email);
    printf("Enter %s's Gender (f/m): ", p[i].name);
    scanf("%s", p[i].gender);
  }
  printf("\n\nAuthor Details:\n S.No. ID    Name \t  Contact\t Email\t Gender");
  for (int i=0; i<n; i++) printf(" %d %d\t %s\t %d\t %s\t %s \n", i+1, p[i].id, p[i].name, p[i].contact, p[i].email, p[i].gender);
  return 0;
}
