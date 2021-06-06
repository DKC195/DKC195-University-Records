#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,b=0,x=1;
  printf("Enter a positive integer:\n");
  scanf("%d", &n);
  if (n<0) {
    printf("The integer is negative.\n");
    exit(0);
  }
  do {
    b=b+x*(n%2);
    n=n/2;
    x=x*10;
  } while (n>0);
  printf("The binary is %d\n", b);
  return 0;
}
