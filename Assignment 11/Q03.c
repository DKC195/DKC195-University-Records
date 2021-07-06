/*Define a structure:
Name(fname, mname, lastname)
Person(age, contact, address)
WAP to nest the structure Name within structure Person and read the record of 10 persons and display it.*/
#include <stdio.h>

struct name {
  char fname[15];
  char mname[15];
  char lastname[15];
};

struct person {
  struct name fullname;
  int age;
  int contact;
  char address[15];
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nPerson %d\n", i+1);
    printf("Enter First Name: ");
    scanf("%s", p[i].fullname.fname);
    printf("Enter Middle Name: ");
    scanf("%s", p[i].fullname.mname);
    printf("Enter Surname: ");
    scanf("%s", p[i].fullname.lastname);
    printf("Enter Age: ");
    scanf("%d", &p[i].age);
    printf("Enter Contact No.: ");
    scanf("%d", &p[i].contact);
    printf("Enter Address: ");
    scanf("%s", p[i].address);
    }
  for (int i=0; i<10; i++) {
    printf("\nPerson %d\n", i+1);
    printf("First Name: \t %s \n", p[i].fullname.fname);
    printf("Middle Name: \t %s \n", p[i].fullname.mname);
    printf("Surname: \t %s \n", p[i].fullname.lastname);
    printf("Age: \t\t %d \n", p[i].age);
    printf("Contact No.: \t %d \n", p[i].contact);
    printf("Address: \t %s \n", p[i].address);
  }
  return 0;
}
