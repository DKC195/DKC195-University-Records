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
  printf("\n\nEmployees Details:\n S.No. ID Name \t Address Contact\n");
  for (int i=0; i<n; i++) printf(" %2d   %d  %s \t %s \t %d\n", i+1, p[i].id, p[i].name, p[i].address, p[i].contact);

  return 0;
}
