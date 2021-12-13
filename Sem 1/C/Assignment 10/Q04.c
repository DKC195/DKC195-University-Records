// Define a structure name Time having data members second, minute & second. Write a main program to add two given Time.
#include <stdio.h>

struct time {
  int second;
  int minute;
  int hour;
} d[2];

int main() {
  int hour=0,minute=0,second=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the second: ");
    scanf("%d", &d[i].second);
    printf("Enter the minute: ");
    scanf("%d", &d[i].minute);
    printf("Enter the hour: ");
    scanf("%d", &d[i].hour);
    second = second+d[i].second;
    minute = minute+d[i].minute;
    hour = hour+d[i].hour;
  }
  while (second>=60) {
    second = second-60;
    minute++;
  }
  while (minute>=60) {
    minute = minute-60;
    hour++;
  }
  printf("The Sum of Time is %d:%d:%d.", hour, minute, second);
  return 0;
}
