/* WAP to read the distance between two cities (in km) and
display the distance in meters, feet, inches and centimeters. */
#include <stdio.h>

int main()
{
  float km;

  printf("Enter the distance in KM: ");
  scanf("%f", &km);

  printf("The distance in meters is %.2f m.", km * 1000);

  printf("\nThe distance in feet is %.2f ft.", km * 3280.84);

  printf("\nThe distance in inch is %.2f in.", km * 3280.84 * 12);

  printf("\nThe distance in centimeters is %.2f cm.", km * 100);
  
  return 0;
}
