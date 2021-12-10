// WAP to read elements in an array (3x3) and find the transpose of a matrix.
#include <stdio.h>

int main() {
  int a[3][3];
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      printf("Enter a number: ");
      scanf("%d", &a[i][j]);
    }
  }
  printf("The transpose of matrix is :\n");
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) printf("%2d ", a[i][j]);
    if (i == 1) printf("-> ");
    else printf("   ");
    for (int j=0; j<3; j++) {
      printf("%2d ", a[j][i]);
      if (j == 2) printf("\n");
    }
  }
  return 0;
}
