// WAP to find the maximum number in an array (3x3) and replace all the elements with the maximum.
#include <stdio.h>

int main() {
  int a[3][3], max;
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      if (i == 0 && j == 0) max = a[i][j];
      if (a[i][j]>max) max = a[i][j];
    }
  }
  printf("The maximum number in array is %d and the replaced output is ", max);
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      a[i][j] = max;
      printf(" %d,", a[i][j]);
    }
  }
  return 0;
}
