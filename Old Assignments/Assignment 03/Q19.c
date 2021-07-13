// WAP to read a +ve integer and determine and print its binary equivalent.
#include <stdio.h>

int main() {
  int n,b=0,x=1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n<0) printf("The integer is negative. ");
  else{
    do {
      b = b+x*(n%2);
      n = n/2;
      x = x*10;
    } while (n>0);
  }
  printf("The binary is %d.", b);
  return 0;
}
