// Define a structure name Distance having data members feet & inch. Write a main program to add two given Distances .
#include <stdio.h>

struct dis {
  int inch;
  int feet;
} d[2];

int main() {
  int feet=0,inch=0;
  for (int i=0; i<2; i++) {
    printf("\nNumber %c\n", 65+i);
    printf("Enter the inch: ");
    scanf("%d", &d[i].inch);
    printf("Enter the feet: ");
    scanf("%d", &d[i].feet);
    inch = inch+d[i].inch;
    feet = feet+d[i].feet;
  }
  while (inch>=12) {
    inch = inch-12;
    feet++;
  }
  printf("The Sum of Distance is %d ft %d in.", feet, inch);
  return 0;
}
