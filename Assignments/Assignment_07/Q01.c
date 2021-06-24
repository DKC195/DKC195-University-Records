//WAP to read 10 elements in an array and calculate the sum and average of all elements.
#include <stdio.h>

int main() {
  int a[10], b=0;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
    b=b+a[i];
  }
  printf("The sum and average is %d and %.2f", b, (float) b/10);
  return 0;
}
