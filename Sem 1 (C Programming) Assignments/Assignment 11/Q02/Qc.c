/*Define a structure name Employee having its member empid, name, address, and salary. WAP to read record of 10 employees and
(c) Display record of all employees whose salary ranges between 15000 to 20000.*/
#include <stdio.h>

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
    printf("Enter %s's salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nFilter: Salary Range 15000 to 20000\n");
  printf("S.No. \t ID \t Name \t Addeess \t Salary\n");
  for (int i=0; i<10; i++) {
    if ((15000<=p[i].salary) && (p[i].salary<=20000)) printf(" %d \t %d \t %s \t %s \t %d\n", i+1, p[i].empid, p[i].name, p[i].address, p[i].salary);
  }
  return 0;
}
