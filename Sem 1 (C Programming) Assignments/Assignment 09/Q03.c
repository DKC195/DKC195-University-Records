// WAP to reverse a given string without using a library function.
#include <stdio.h>

int main() {
  char string[20],string1[20];
  int n=0;
  printf("Enter a string: ");
  gets(string);
  while(string[n] != '\0') n++;
  for (int j=0, i=n-1; j<n; j++,i--) {
    string1[j] = string[i];
    printf("%d %d\n", i, j);
  }
  printf("The reverse of the string is %s.", string1);
  return 0;
}
