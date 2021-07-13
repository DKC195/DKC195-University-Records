// WAP to read elements in an array (3x3) and calculate the sum and average of all elements.
#include <stdio.h>

int main() {
  float a[3][3], sum=0, avg;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%f", &a[i][j]);
      sum = sum+a[i][j];
    }
  }
  printf("The sum and average is %.2f and %.2f.", sum, sum/9);
  return 0;
}
