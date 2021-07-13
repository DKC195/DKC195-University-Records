// WAP to find factorial of any number using recursion.
#include <stdio.h>
int fac(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The factorial of %d is %d.", n, fac(n));
  return 0;
}

int fac(int x) {
  if (x == 0) return 1;
  return x*fac(x-1);
}
