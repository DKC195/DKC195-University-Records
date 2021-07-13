// WAP to read elements in an array(2x3) and calculate the sum of rows.
#include <stdio.h>

int main() {
  int a[2][3],sum[]={0,0};
  for (int i=0; i<2; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      sum[i] = sum[i]+a[i][j];
    }
  }
  for (int i=0; i<2; i++) printf("The sum of row %d is %d.\n", i+1, sum[i]);
  return 0;
}
