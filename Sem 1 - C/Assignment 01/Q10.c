// WAP to read time into the second and convert it into hour, minute and second.
#include <stdio.h>

int main()
{
  int t;
  
  printf("Enter the time in total seconds: ");
  scanf("%d", &t);
  
  printf("The time is %d hours %d minutes %d seconds", t % 60, t / 3600, t / 60 - (t / 3600) * 60);
  
  return 0;
}
