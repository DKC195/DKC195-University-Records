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
  printf("\n\nEersonnels Details:");
  for (int i=0; i<n; i++) {
    printf("Person %d\n", i+1);
    printf("Name: \t\t %s \n", p[i].name);
    printf("Age: \t\t %d \n", p[i].age);
    printf("Address: \t %s \n", p[i].address);
    printf("Contact: \t %d \n\n", p[i].contact);
  }
  return 0;
}
