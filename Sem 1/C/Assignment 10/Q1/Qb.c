// Define a structure named Employee with its members: Employee(id, name, address, contact, dob, designation, salary)
#include <stdio.h>

struct employees{
  int id;
  char name[20];
  char address[40];
  int contact;
  int dob;
  char designation[20];
  int salary;
};

int main() {
  int n;
  printf("Enter the no. Of Employees: ");
  scanf("%d", &n);
  struct employees p[n];
  for (int i=0; i<n; i++) {
    printf("\nEmployee %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
    printf("Enter %s's DOB (YYYY/MM/DD): ", p[i].name);
    scanf("%d", &p[i].dob);
    printf("Enter %s's Designation: ", p[i].name);
    scanf("%s", p[i].designation);
    printf("Enter %s's Salary: ", p[i].name);
    scanf("%d", &p[i].salary);
  }
  printf("\n\nEmployees Details:\n S.No. ID Name \t Address Contact DOB \t Designation \t Salary \n");
  for (int i=0; i<n; i++) printf(" %3d   %d  %s \t %s \t %d \t %d \t %s \t\t %d \n", i+1, p[i].id, p[i].name, p[i].address, p[i].contact, p[i].dob, p[i].designation, p[i].salary);
  return 0;
}
