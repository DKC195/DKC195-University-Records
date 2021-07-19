// WAP to read 10 elements in an array and calculate the sum and average of all elements.
#include <stdio.h>

int main() {
  float a[10], b=0;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%f", (a+i));
    b = b+*(a+i);
  }
  printf("The sum and average is %.1f and %.2f", b, b/10);
  return 0;
}
