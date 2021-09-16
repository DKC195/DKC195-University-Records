// WAP to read elements in an array(3x5) and calculate the sum of rows.
#include <stdio.h>

int main() {
  int a[3][5],sum[]={0,0,0,0,0};
  for (int j=0; j<5; j++) {
    for (int i=0; i<3; i++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
      sum[j] = sum[j]+a[i][j];
    }
  }
  for (int j=0; j<5; j++) printf("The sum of column %d is %d.\n", j+1, sum[j]);
  return 0;
}
