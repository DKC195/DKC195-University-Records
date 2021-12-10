// WAP to multiply two given matrices (3x3) and print the resultant matrix.
#include <stdio.h>

int main() {
  int a[3][3],b[3][3],c[3][3];
  printf("For Matrix A\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nFor Matrix B\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &b[i][j]);
    }
  }
  printf("\nThe resultant matrix is: \n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) printf("%2d ", a[i][j]);
    if (i == 1) printf(" * ");
    else printf("   ");
    for (int j=0; j<3; j++) printf("%2d ", b[i][j]);
    if (i == 1) printf(" = ");
    else printf("   ");
    for (int j=0; j<3; j++) {
      printf("%3d ", a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j]);
      if (j == 2) printf("\n");
    }
  }
  return 0;
}
