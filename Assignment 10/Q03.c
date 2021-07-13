// Define a structure name Date having data members day, month & year. Write a main program to add two given Date.
#include <stdio.h>

struct date {
  int day;
  int month;
  int year;
} d[2];

int main() {
  int year=0,month=0,day=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the day: ");
    scanf("%d", &d[i].day);
    printf("Enter the month: ");
    scanf("%d", &d[i].month);
    printf("Enter the year: ");
    scanf("%d", &d[i].year);
    day = day+d[i].day;
    month = month+d[i].month;
    year = year+d[i].year;
  }
  while (day>31) {
    day = day-31;
    month++;
  }
  while (month>12) {
    month = month-12;
    year++;
  }
  printf("The Sum of Dates is %d/%d/%d (Y/M/D).", year, month, day);
  return 0;
}
