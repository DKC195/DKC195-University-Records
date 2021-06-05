#include <stdio.h>

int main()
{
  int x,y;

  for (x=0; x<100; x++)
  {
    y=y+x*x*x;
  }

  printf("The sum of the cubes of the numbers is %d\n",y);
  return 0;
}
