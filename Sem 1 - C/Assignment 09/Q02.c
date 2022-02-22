// WAP to copy the content of a given string to another without using a library function.
#include <stdio.h>

int main() {
  char string[20],string1[20];
  int i=0;
  printf("Enter a string: ");
  gets(string);
  while(string[i] != '\0') {
    string1[i] = string[i];
    i++;
  }
  printf("The copied string is %s.", string1);
  return 0;
}
