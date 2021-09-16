/*Define a structure name Complex with its member real and img.
Write a user defined function named addComplex() to add two given Complex numbers.
The function should take two Complex type arguments and also return Complex type.
WAP to implement the UDF in main program.*/
#include <stdio.h>

struct complex {
  int real;
  int img;
} p[3];

struct complex addcomplex(struct complex, struct complex);

int main() {
  for (int i = 0; i<2; i++) {
    printf("Number %c\n", 65+i);
    printf("Enter the real part of number: ");
    scanf("%d", &p[i].real);
    printf("Enter the imaginary part of number: ");
    scanf("%d", &p[i].img);
  }
  p[2] = addcomplex(p[0], p[1]);
  printf("The sum is %d+%di", p[2].real, p[2].img);
  return 0;
}

struct complex addcomplex(struct complex x, struct complex y) {
  struct complex z;
  z.real = x.real+y.real;
  z.img = x.img+y.img;
  return z;
}
