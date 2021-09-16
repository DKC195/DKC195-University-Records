// WAP to find power of any number using recursion.
#include <stdio.h>
int power(int, int);

int main() {
  int n,p;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter the power to be raised: ");
  scanf("%d", &p);
  printf("The output is %d.",power(n, p));
  return 0;
}

int power(int x, int y) {
  if (y == 1) return x;
  else return x*power(x, y-1);
}
