// WAP to read a number and check whether it is prime or not.
#include <stdio.h>

int main() {
  int x,i;
  printf("Enter a Natural Number: ");
  scanf("%d", &x);
  for (i=1; i<x/2; i++) if(x%(i+1) == 0) break;
  if (x == 1) printf("1 is neither composite nor prime.");
  else if (x<1) printf("The number is not natural number.");
  else if (x%(i+1) == 0) printf("The number %d is not a prime number.", x);
  else printf("The number %d is a prime number.", x);
  return 0;
}
