// WAP to add two given matrix (3x3) and print the reaultant matrix.
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
  printf("For Matrix B\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &b[i][j]);
    }
  }
  printf("The Sum is: \n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) printf("%2d ", a[i][j]);
    if (i == 1) printf(" + ");
    else printf("   ");
    for (int j=0; j<3; j++) printf("%2d ", b[i][j]);
    if (i == 1) printf(" = ");
    else printf("   ");
    for (int j=0; j<3; j++) {
      printf("%2d ", a[i][j]+b[i][j]);
      if (j == 2) printf("\n");
    }
  }
  return 0;
}
