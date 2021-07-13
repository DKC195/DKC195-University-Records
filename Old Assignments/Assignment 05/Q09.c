// WAP to find the LCM of two given number using a function.
#include <stdio.h>
int LCM(int, int);

int main() {
  int a,b;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("The LCM is %d.", LCM(a,b));
  return 0;
}

int LCM(int x, int y) {
  int z;
  for(int i=1; i<x+1; i++)
    if (x%i == 0)
      if (y%i == 0) z=i;
  z=(x*y)/z;
  return z;
}
