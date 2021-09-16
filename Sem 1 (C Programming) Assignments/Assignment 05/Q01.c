// WAP to find the square of any number using the function.
#include <stdio.h>
float sq(float);

int main() {
  float x;
  printf("Enter a number: ");
  scanf("%f", &x);
  printf("The square of %.3f is %.3f.", x, sq(x));
  return 0;
}

float sq(float y) {
  return y*y;
}
