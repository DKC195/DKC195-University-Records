// WAP to find reverse of any number using recursion.
#include <stdio.h>
int rev(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The reverse of %d is %d.", n,rev(n));
  return 0;
}

int rev(int x) {
  int y,z=1;
  if(x == 0) return 0;
  for (int i=x; i>0; i/=10) {
    y = i%10;
    z*=10;
  }
  return y+rev(x%(z/10))*10;
}
