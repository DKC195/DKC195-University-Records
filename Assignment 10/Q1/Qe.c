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
  printf("\n\nAuthor Details:");
  for (int i=0; i<n; i++) {
    printf("Author %d\n", i+1);
    printf("ID: \t\t %d \n", p[i].id);
    printf("Name: \t\t %s \n", p[i].name);
    printf("Contact: \t %d \n", p[i].contact);
    printf("Email: \t\t %s \n", p[i].email);
    printf("Gender: \t %s \n\n", p[i].gender);
  }
  return 0;
}
