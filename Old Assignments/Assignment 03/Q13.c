// WAP to find the sum of series. 1+2/2^2+3/3^3=4/4^4+......+n/n^n
#include <stdio.h>

int main() {
  float n,x=0,y;
  printf("Write a number: ");
  scanf("%f", &n);
  for (int i=1; i<n+1; i++) {
    y=1;
    for(int j=0; j<i; j++) y = y*i;
    x = x+(i/y);
  }
  printf("The sum of the series is %f. ", x);
  return 0;
}
