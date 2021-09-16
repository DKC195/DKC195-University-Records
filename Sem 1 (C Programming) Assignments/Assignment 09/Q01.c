// WAP to find the length of a given string without using a library function.
#include <stdio.h>

int main() {
  char string[20];
  int i=0;
  printf("Enter a string: ");
  gets(string);
  while(string[i] != '\0') i++;
  printf("The length of string is %d.", i);
  return 0;
}
