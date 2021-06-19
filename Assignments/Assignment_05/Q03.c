// WAP to check a given number is even or odd using function.
#include <stdio.h>

int oe(int x);

int main() {
  int a;
  printf("Enter a number:");
  scanf("%d", &a);
  oe(a);
  return 0;
}

int oe(int x){
  int y;
  y=x%2;
  if (y==0) printf("%d is even.", x);
  else printf("%d is odd.", x);
}
