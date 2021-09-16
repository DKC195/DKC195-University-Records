// WAP to find the product of two given number.
#include <stdio.h>
int product(int, int);

int main() {
  int n,p;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter second: ");
  scanf("%d", &p);
  printf("The product is %d.",product(n, p));
  return 0;
}

int product(int x, int y) {
  if (y == 1) return x;
  else return x+product(x, y-1);
}
