// WAP to convert decimal into binary number using function.
#include <stdio.h>
int d2b(int);

int main() {
  int d;
  printf("Enter a number: ");
  scanf("%d", &d);
  printf("The binary is %d", d2b(d));
  return 0;
}

int d2b(int n) {
  int b=0,x=1;
  do {
    b=b+x*(n%2);
    n=n/2;
    x=x*10;
  } while (n>0);
  return b;
}
