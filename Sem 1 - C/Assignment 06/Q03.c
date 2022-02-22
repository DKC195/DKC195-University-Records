// WAP to find the sum of all numbers between 1 to n using recursion.
#include <stdio.h>
int sum(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The output is %d.",sum(n));
  return 0;
}

int sum(int x) {
  if (x == 0) return 0;
  else return x+sum(x-1);
}
