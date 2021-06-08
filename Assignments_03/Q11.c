#include <stdio.h>

int main() {
  int n,f=1;
  printf("Write a number:\n");
  scanf("%d", &n);
  for (int i=0; i<n; i++) f=f*(i+1);
  printf("The factorial of %d is %d\n", n, f);
  return 0;
}
