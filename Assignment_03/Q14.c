#include <stdio.h>

int main() {
  int x=0,n=1;
  printf("Sum will be displayed when you enter 0.\n");
  do {
    printf("Enter a number:\n");
    scanf("%d", &n);
    x=x+n;
  } while (n!=0);
  printf("The sum is %d.\n", x);
  return 0;
}
