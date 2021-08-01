// Define a structure named Person with its members: Person(name, age, address, contact)
#include <stdio.h>

struct person{
  char name[20];
  int age;
  char address[40];
  int contact;
};

int main() {
  int n;
  printf("Enter the no. of Personnels: ");
  scanf("%d", &n);
  struct person p[n];
  for (int i=0; i<n; i++) {
    printf("\nPerson %d\n", i+1);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Age: ", p[i].name);
    scanf("%d", &p[i].age);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
  }
  printf("\n\nPersonnels Details:\n");
  printf("S.No. \t Name \t Age \t Address \t Contact\n");
  for (int i=0; i<n; i++) printf(" %d \t %s \t %d \t %s \t\t %d \n", i+1, p[i].name, p[i].age, p[i].address, p[i].contact);
  return 0;
}
