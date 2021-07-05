/*Define a structure name Employee having its member empid, name, address, and salary. WAP to read record of 10 employees and
(a) Display record of all employees who live in 'DHARAN'.*/
#include <stdio.h>
#include <string.h>

struct employee{
  int empid;
  char name[20];
  char address[40];
  int salary;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter Employee ID: ");
    scanf("%d", &p[i].empid);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    strupr(p[i].address);
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter: Living in DHARAN\n");
  for (int i=0; i<10; i++) {
    if (strcmp(p[i].address,"DHARAN")==0) {
      printf("Employee %d\n", i+1);
      printf("Employee ID: \t %d \n", p[i].empid);
      printf("Name: \t\t %s \n", p[i].name);
      printf("Address: \t %s \n", p[i].address);
      printf("salary: \t %d \n\n", p[i].salary);
    }
  }
  return 0;
}
