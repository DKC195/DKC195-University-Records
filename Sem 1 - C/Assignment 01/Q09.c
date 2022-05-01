// WAP to read two numbers and find the quotient and reminder.
#include <stdio.h>

int main()
{
  int a, b;
  
  printf("Enter the Dividend: ");
  scanf("%d", &a);
  
  printf("Enter the Divisor: ");
  scanf(" %d", &b);
  
  printf("Quotient: %d \n", a / b);
  
  printf("Remainder: %d", a % b);
  
  return 0;
}
