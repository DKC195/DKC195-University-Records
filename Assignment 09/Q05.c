// WAP to compare two given strings without using library functions.
#include <stdio.h>

int main() {
  char str1[20], str2[20];
  int n=0, m=0;
  printf("Enter a string: ");
  gets(str1);
  printf("Enter another string: ");
  gets(str2);
  while(str1[n] != '\0') n++;
  for (int i=0; i<n; i++) {
    if (str1[i] != str2[i]) {
      printf("The strings are not same.");
      break;
    }
    else if (i == n-1) printf("The strings are same.");
  }
  return 0;
}
