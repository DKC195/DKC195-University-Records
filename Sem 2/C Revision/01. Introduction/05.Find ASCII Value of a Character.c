#include <stdio.h>

int main()
{
  char c;
  printf("Enter a Character:");
  scanf("%c", &c);
  printf("The ASCII Value of the %c is %d", c, c);
  return 0;
}