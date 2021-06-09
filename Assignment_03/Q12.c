#include <stdio.h>
#include <math.h>

int main() {
  int x,n,y=1;
  printf("Enter the first number:\n");
  scanf("%d", &x);
  printf("Enter the power to be raised:\n");
  scanf(" %d", &n);
  for (int i=0; i<n; i++) y=y*x;
  printf("The answer is %d.", y);
  return 0;
}
