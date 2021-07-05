// Define a structure named Customer with its members: Customer(id, name, address, contact)
#include <stdio.h>

struct customer{
  int id;
  char name[20];
  char address[40];
  int contact;
};

int main() {
  int n;
  printf("Enter the no. Of Customers: ");
  scanf("%d", &n);
  struct customer p[n];
  for (int i=0; i<n; i++) {
    printf("\nCustomer %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Address: ", p[i].name);
    scanf("%s", p[i].address);
    printf("Enter %s's Contact: ", p[i].name);
    scanf("%d", &p[i].contact);
  }
  printf("\n\nCustomer Details:");
  for (int i=0; i<n; i++) {
    printf("Customer %d\n", i+1);
    printf("ID: \t\t %d \n", p[i].id);
    printf("Name: \t\t %s \n", p[i].name);
    printf("Address: \t %s \n", p[i].address);
    printf("Contact: \t %d \n\n", p[i].contact);
  }
  return 0;
}
