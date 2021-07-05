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
  printf("\n\nEmployees Details:");
  for (int i=0; i<n; i++) {
    printf("Employee %d\n", i+1);
    printf("ID: \t\t\t %d \n", p[i].id);
    printf("Name: \t\t\t %s \n", p[i].name);
    printf("Address: \t\t %s \n", p[i].address);
    printf("Contact: \t\t %d \n", p[i].contact);
    printf("DOB (YYYY/MM/DD): \t %d \n", p[i].dob);
    printf("Designation: \t\t %s \n", p[i].designation);
    printf("Salary: \t\t %d \n\n", p[i].salary);
  }
  return 0;
}
