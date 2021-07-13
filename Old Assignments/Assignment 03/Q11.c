// WAP to read a number and calculate its factorial.
#include <stdio.h>

int main() {
  int n,f=1;
  printf("Write a number: ");
  scanf("%d", &n);
  for (int i=0; i<n; i++) f = f*(i+1);
  printf("The factorial of %d is %d.", n, f);
  return 0;
}
