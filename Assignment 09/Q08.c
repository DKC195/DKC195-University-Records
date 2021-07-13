// WAP to count the number of words in a given line of text.
#include <stdio.h>

int main() {
  char str1[100];
  int w=0;
  printf("Enter a string: ");
  gets(str1);
  for (int i=0; str1[i]!='\0'; i++) {
    if (str1[i] == 32) w++;
  }
  printf("The no. of words are %d.", w+1);
  return 0;
}
