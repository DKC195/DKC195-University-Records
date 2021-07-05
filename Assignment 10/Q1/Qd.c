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
  printf("\n\nItem Details:");
  for (int i=0; i<n; i++) {
    printf("Item %d\n", i+1);
    printf("Code: \t %d \n", p[i].code);
    printf("Name: \t %s \n", p[i].name);
    printf("Price: \t %d \n\n", p[i].price);
  }
  return 0;
}
