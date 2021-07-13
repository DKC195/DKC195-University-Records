// WAP to swap two numbers using function.
#include <stdio.h>
int swap(int *x, int *y);

int main() {
  int a,b;
  printf("a=");
  scanf("%d", &a);
  printf("b=");
  scanf("%d", &b);
  swap(&a,&b);
  printf("\na=%d & b=%d", a, b);
  return 0;
}

int swap(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}
