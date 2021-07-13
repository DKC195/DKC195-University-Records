// WAP to check to whether a given word is palindrome or not.
#include <stdio.h>

int main() {
  char str1[20];
  int i=0;
  printf("Enter a word: ");
  gets(str1);
  while(str1[i]!='\0') i++;
  for (int j=0; j<i; j++) {
    if (str1[j]!=str1[i-j-1]) {
      printf("The word is not palindrome.");
      break;
    }
    else if(j == i-1) printf("The word is palindrome.");
  }
  return 0;
}
