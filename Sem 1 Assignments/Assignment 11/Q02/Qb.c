/*Define a structure name Employee having its member empid, name, address, and salary. WAP to read record of 10 employees and
(b) Display record of all employees who does not live in 'DHARAN'.*/
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
  printf("\n\nFilter: Not Living in DHARAN\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) {
    if (strcmp(p[i].address,"DHARAN")) printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
  }
  return 0;
}
