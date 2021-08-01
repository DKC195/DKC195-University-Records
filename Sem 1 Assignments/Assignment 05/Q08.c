// WAP to find the HCF of two given number using functions
#include <stdio.h>
int HCF(int, int);

int main() {
  int a,b;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);
  printf("The HCF is %d.", HCF(a,b));
  return 0;
}

int HCF(int x, int y) {
  int z;
  for(int i=1; i<x+1; i++)
    if (x%i == 0)
      if (y%i == 0) z=i;
  return z;
}
