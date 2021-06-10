//WAP to display multiplication table of 5 from 1 to 10.
#include <stdio.h>

int main() {
  int x,y;
  for (x=1; x<11; x++) {
    y=5*x;
    printf("5*%2d=%2d\n", x,y);
  }
  return 0;
}
