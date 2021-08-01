// WAP to convert all given character in a given string to uppercase.
#include <stdio.h>
#include <string.h>

int main() {
  char str1[20];
  printf("Enter a string: ");
  gets(str1);
  printf("The Capitalized String is %s", strupr(str1));
  return 0;
}
