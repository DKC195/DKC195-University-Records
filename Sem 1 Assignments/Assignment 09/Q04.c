// WAP to concatenate two given strings without using a library function.
#include <stdio.h>

int main() {
  char str1[20],str2[20],str3[40];
  int n=0, m=0;
  printf("Enter a string: ");
  gets(str1);
  printf("Enter another string: ");
  gets(str2);
  while(str1[n] != '\0') n++;
  while(str2[n] != '\0') m++;
  for (int i=0; i<n+m; i++) {
    str3[i] = str1[i];
    str3[i+n] = str2[i];
  }
  printf("The concatenate of the strings is %s.", str3);
  return 0;
}
