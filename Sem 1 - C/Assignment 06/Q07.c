// WAP to generate nth fibonacci term using recursion.
#include <stdio.h>
int fibo(int);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The %dth term is %d.", n, fibo(n));
  return 0;
}

int fibo(int x) {
  if(x == 0) return 0;
  else if(x == 1) return 1;
  return fibo(x-1)+fibo(x-2);
}
