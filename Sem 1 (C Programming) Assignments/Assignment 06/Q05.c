// WAP to find sum of digits of a given number using recursion.
#include <stdio.h>
int sum(int, int);

int main() {
  int x,y;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("Enter another number: ");
  scanf("%d", &y);
  printf("The sum is %d.", sum(x, y));
  return 0;
}

int sum(int a, int b) {
  if(b == 0) return 1;
  return a+sum(1, b-1);
}
