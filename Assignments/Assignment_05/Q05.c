//WAP to find the factorial of a given number using function.
#include <stdio.h>

int fac(int i);

int main() {
  int n,f;
  printf("Enter a number:");
  scanf("%d", &n);
  f=fac(n);
  printf("The factorial of %d is %d.", n, f);
  return 0;
}

int fac(int i){
  int x=1;
  for (int j=i; j>0; j--) {
    x=x*j;
  }
  return x;
}
