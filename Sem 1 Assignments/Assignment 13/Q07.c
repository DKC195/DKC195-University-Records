/* WAP to read to store Employees(id, name, address, salary) detail in a text file. Read data from the text file, sort them in ascending order of
salary and store the sorted record in a binary file. Display the details of all employees. */
#include <stdio.h>

struct emp {
  int id;
  char name[20];
  char address[20];
  int salary;
} e;

int main() {
  FILE *output = fopen("details.bin", "wb");
  int n;

  printf("Enter the no. of employees: ");
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    printf("\nEmployee %c\n", i+65);
    printf("Enter ID:");
    scanf("%d", &e.id);
    printf("Enter Name:");
    scanf("%s", e.name);
    printf("Enter Address:");
    scanf("%s", e.address);
    printf("Enter Salary:");
    scanf("%d", &e.salary);
    fprintf(output,"%d\n%s\n%s\n%d\n", e.id, e.name, e.address, e.salary);
  }
  fclose(output);

  output = fopen("details.bin","rb");
  printf("\nID.\tName\tAddress\tSalary\n");
  while (fscanf(output, "%d\n%s\n%s\n%d\n", &e.id, e.name, e.address, &e.salary) != EOF) {
    printf("%d\t%s\t%s\t%d\n", e.id, e.name, e.address, e.salary);
  }
  fclose(output);

  return 0;
}
