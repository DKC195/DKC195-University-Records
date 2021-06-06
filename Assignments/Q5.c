#include <stdio.h>

int main() {
  int v,w,x,z;

  printf("Enter a Number:\n");
  scanf("%d", &x);

  for (w=1; w<x/2; w++) {
    z=x%(w+1);
    if (z==0) break;
  }

  if (z==0) printf("The number %d is not a prime number.\n", x);
  else printf("The number %d is a prime number.\n", x);

  return 0;
}
