//WAP to read a number amd reverse it. (For ex. 12345 shoulb be 54321)
#include <stdio.h>

int main() {
  int n,x=0,y;
  printf("Enter a number:\n");
  scanf("%d", &n);
  for (n; n>0; n=n/10) {
    y=n%10;
    x=x*10+y;
  }
  printf("The reverse of the digits is %d.", x);
  return 0;
}
