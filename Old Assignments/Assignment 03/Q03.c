// WAP to calculate the sum of cube of numbers from 1 to 100.
#include <stdio.h>

int main() {
  int x,y;
  for (x=1; x<101; x++) y = y+x*x*x;
  printf("The sum of the cubes of the numbers is %d.",y);
  return 0;
}
