#include <stdio.h>

int main()
{
  int x,y;

  for (x=1; x<11; x++) {
    y=5*x;
    printf("5*%2d=%d\n", x,y);
  }
  return 0;
}
