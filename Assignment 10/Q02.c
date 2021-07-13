// Define a structure name Complex having data members real & img. Write a main program to add two given complex numbers.
#include <stdio.h>

struct complex {
  int real;
  int img;
} p[2];

int main() {
  for (int i=0; i<2; i++) {
    printf("Number %c\n", 65+i);
    printf("Enter the real part of number: ");
    scanf("%d", &p[i].real);
    printf("Enter the imaginary part of number: ");
    scanf("%d", &p[i].img);
  }
  printf("\nThe sum is %d+%di.", p[1].real+p[0].real, p[1].img+p[0].img);
  return 0;
}
