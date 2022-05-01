// WAP to declare variable of all Data Types, read the values and display them.
#include <stdio.h>

int main()
{
  int a;
  char b;
  float c;
  double d;

  printf("Enter a integer: ");
  scanf("%d", &a);

  printf("Enter a character: ");
  scanf(" %c", &b);

  printf("Enter a float number: ");
  scanf(" %f", &c);

  printf("Enter a double: ");
  scanf(" %lf", &d);
  
  printf("The given input are\n Integer: %d \n Character: %c \n Float: %f \n Double: %lf ", a, b, c, d);
  
  return 0;
}
