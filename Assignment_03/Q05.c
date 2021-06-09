//WAP to read a number and check whether it is prime or not.
#include <stdio.h>

int main() {
  int x,z;
  printf("Enter a Natural Number:\n");
  scanf("%d", &x);
  for (int i=1; i<x/2; i++) {
    z=x%(i+1);
    if (z==0) break;
  }
  if (x==1) printf("1 is neither composite nor prime\n");
  else if (x<1) printf("The number is not natural number.\n");
  else if (z==0) printf("The number %d is not a prime number.\n", x);
  else printf("The number %d is a prime number.\n", x);
  return 0;
}
