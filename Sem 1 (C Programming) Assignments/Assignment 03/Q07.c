// WAP to display Fibonacci series upto n terms.
#include <stdio.h>

int main() {
  int n,x=0,y=1,z;
  printf("Enter a natural number n:\n");
  scanf("%d", &n);
  if (n<0) printf("The number is negative.\n");
  else {
    printf("The Fibonacci Series is: %d, %d, ",x, y);
    for (int i=0; i<n; i++) {
      z = x+y;
      x = y;
      y = z;
      printf("%d,", z);
    }
  }
  return 0;
}
