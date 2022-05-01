// WAP to read two numbers and swap their values.
#include <stdio.h>

int main()
{
  int a;

  printf("Enter a two digit number: ");
  scanf("%d", &a);
  
  printf("The interchanged form is %d.", (a % 10 * 10) + a / 10);
  
  return 0;
}
