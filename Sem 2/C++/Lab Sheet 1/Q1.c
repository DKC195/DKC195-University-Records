/* Write a program to find the average expenditure of a company for each month of each year, each year and average over 
the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average. */
#include <stdio.h>

int main()
{
  int time, sum = 0, count = 0, year = 2021;
  printf("Enter the no. of years: ");
  scanf("%d", &time);
  int exp[time][12];
  for (int i = 0; i < time; i++)
  {
    printf("For the Year %d\n", year);
    for (int j = 0; j < 12; j++)
    {
      printf("For Month %d, Enter the Expenditure: ", j+1);
      scanf("%d", &exp[i][j]);
      sum = sum + exp[i][j];
      count++;
    }
    year++;
  }
  printf("Calculation: \nTotal:\t\t%d\nAverage:\t%d", sum, sum/count);
  return 0;
}
