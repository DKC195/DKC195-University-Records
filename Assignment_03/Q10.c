#include <stdio.h>

int main() {
  int n,s=0,x=1;
  printf("Enter the number\n");
  scanf("%d", &n);
  s=s+n;
  while (n!=0) {
    printf("Enter a number to add(Enter 0 to stop):\n");
    scanf("%d", &n);
    s=s+n;
  }
  printf("The sum is %d.\n", s);
  return 0;
}
