#include <stdio.h>

int main()
{
  int x,y;
  y=0;

  for (x=1; x<101; x++)
  {
    y=y+x;
  }

  printf("The sum of number is %d\n", y);

  return 0;
}
