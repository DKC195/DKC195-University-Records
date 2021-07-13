/* WAP to read values from user and find the sum of given numbers until the user enters 0
and also finds its average. */
#include <stdio.h>

int main() {
  float x=0,n=1,i=0;
  printf("Sum and its average will be displayed when you enter 0.\n");
  do {
    printf("Enter a number: ");
    scanf("%f", &n);
    x = x+n;
    i++;
  } while (n!=0);
  printf("The sum is %.2f and the average is %.2f.", x, x/(i-1));
  return 0;
}
