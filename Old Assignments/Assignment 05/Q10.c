// WAP to find the value of one number raised to the power of another using function.
#include <stdio.h>
int raise(int, int);

int main() {
  int n,p;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter the power to be raised: ");
  scanf("%d", &p);
  printf("The output is %d.", raise(n,p));
  return 0;
}

int raise(int x, int y){
  int z=1;
  for (int i=y; i>0; i--) z = z*x;
  return z;
}
