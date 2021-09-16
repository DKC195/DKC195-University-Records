/* Two number are entered through the keyboard. Write a program to find the value of one raised
to the power of another. */
#include <stdio.h>

int main() {
  int x,n,y=1;
  printf("Enter the first number: ");
  scanf("%d", &x);
  printf("Enter the power to be raised: ");
  scanf(" %d", &n);
  for (int i=0; i<n; i++) y = y*x;
  printf("The answer is %d.", y);
  return 0;
}
