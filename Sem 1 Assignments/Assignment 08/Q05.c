// WAP to read elements in an array (3x3) and calculate the sum of diagonal matrix.
#include <stdio.h>

int main() {
  int a[3][3], sum=0;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      if (i == j) sum = sum+a[i][j];
    }
  }
  printf("The sum of diagonal matrix is %d.", sum);
  return 0;
}
