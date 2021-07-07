// Define a structure named Account with its members: Account(id, name, acno, actype, balance)
#include <stdio.h>

struct account {
  int id;
  char name[20];
  int acno;
  char actype[20];
  int bal;
};

int main() {
  int n;
  printf("Enter the no. of Accounts: ");
  scanf("%d", &n);
  struct account p[n];
  for (int i=0; i<n; i++) {
    printf("\nAccount %d\n", i+1);
    printf("Enter ID: ");
    scanf("%d", &p[i].id);
    printf("Enter Name: ");
    scanf("%s", p[i].name);
    printf("Enter %s's Account No.: ", p[i].name);
    scanf("%d", &p[i].acno);
    printf("Enter %s's Account Type: ", p[i].name);
    scanf("%s", p[i].actype);
    printf("Enter %s's the Balance: ", p[i].name);
    scanf("%d", &p[i].bal);
  }
  printf("\n\nAccount Details:\nID \tName \tAccount No. \tAccount Type \tBalance \n");
  for (int i=0; i<n; i++) printf("%d \t%d \t%s \t%d \t\t%s \t\t%d \n", i+1, p[i].id, p[i].name, p[i].acno, p[i].actype, p[i].bal);
  return 0;
}
