// WAP to read 10 elements in an array and find the maximum.
#include <stdio.h>

int main() {
  int a[10],max;
  printf("Enter a number: ");
  scanf("%d", (a+0));
  max = *(a+0);
  for (int i=1; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", (a+i));
    if (max<*(a+i)) max = *(a+i);
  }
  printf("The maximum number is %d.", max);
  return 0;
}
