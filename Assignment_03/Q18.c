#include <stdio.h>

int main() {
  int n,x=0,j=1;
  printf("Enter a number n:\n");
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    x=x+j;
    j=j*10+1;
  }
  printf("The sum is %d.",x);
  return 0;
}
