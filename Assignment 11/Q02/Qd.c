/*Define a structure name Employee having its member empid, name, address, and salary. WAP to read record of 10 employees and
(d) Display record of all employees after increasing the salaries of all employees by 10%.*/
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
  printf("\n\nFilter: Salary 10% Increase\n");
  for (int i=0; i<10; i++) {
    printf("Employee %d\n", i+1);
    printf("Employee ID: \t %d \n", p[i].empid);
    printf("Name: \t\t %s \n", p[i].name);
    printf("Address: \t %s \n", p[i].address);
    printf("salary: \t %d \n\n", p[i].salary*11/10);
  }
  return 0;
}
