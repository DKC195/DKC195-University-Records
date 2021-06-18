//WAP to find the square of any number using the function
#include <stdio.h>

float sq(float s);

int main() {
  float x,a;
  printf("Enter a number:");
  scanf("%f", &x);
  a=sq(x);
  printf("The square of %.3f is %.3f.\n", x, a);
  return 0;
}

float sq(float y) {
  return y*y;
}
