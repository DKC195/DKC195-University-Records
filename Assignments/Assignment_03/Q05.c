//WAP to read a number and check whether it is prime or not.
#include <stdio.h>

int main() {
  int x,i;
  printf("Enter a Natural Number:\n");
  scanf("%d", &x);
  for (i=1; i<x/2; i++) if(x%(i+1)==0) break;
  if (x==1) printf("1 is neither composite nor prime\n");
  else if (x<1) printf("The number is not natural number.\n");
  else if (x%(i+1)==0) printf("The number %d is not a prime number.\n", x);
  else printf("The number %d is a prime number.\n", x);
  return 0;
}
