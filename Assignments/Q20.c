#include <stdio.h>
#include <stdlib.h>

int main() {
  int n,x,s;
  printf("Enter the natural number n:\n");
  scanf("%d", &n);
  if (n<1) {
    printf("The Number is not natural.\n");
    exit(0);
  }
  for (int i=1; i<n+1; i++) {
    x=i*i;
    printf("The square of %d is %d.\n", i, x);
    s=s+x;
  }
  printf("The sum of square is %d.\n", x);
  return 0;
}
