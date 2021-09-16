// Define a structure named Item with its members: Item(code, name, price)
#include <stdio.h>

struct item{
  int code;
  char name[20];
  int price;
};

int main() {
  int n;
  printf("Enter the no. Of Item: ");
  scanf("%d", &n);
  struct item p[n];
  for (int i=0; i<n; i++) {
    printf("\nItem %d\n", i+1);
    printf("Enter Code: ");
    scanf("%d", &p[i].code);
    printf("Enter The Name: ");
    scanf("%s",p[i].name);
    printf("Enter %s's Price: ", p[i].name);
    scanf("%d", &p[i].price);
  }
  printf("\n\nItem Details:\n S.No.\t Code\t Name\t Price\n");
  for (int i=0; i<n; i++) printf(" %d \t %d \t %s \t %d \n", i+1, p[i].code, p[i].name, p[i].price);
  return 0;
}
