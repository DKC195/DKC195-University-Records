// WAP to check a given number is even or odd using function.
#include <stdio.h>
int oe(int);

int main() {
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  oe(a);
  return 0;
}

int oe(int x){
  (x%2 == 0) ? printf("%d is even.", x):printf("%d is odd.", x);
}
