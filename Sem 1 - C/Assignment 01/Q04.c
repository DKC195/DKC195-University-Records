// WAP to read temperature in Fahrenheit and convert it into centigrade. C=5/9(F-32)
#include <stdio.h>

int main()
{
  float f;

  printf("Enter the temprature in F: ");
  scanf("%f", &f);
  
  printf("The temprature in C is %.2f.", (f - 32) * 5 / 9);
  
  return 0;
}
