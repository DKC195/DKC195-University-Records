// WAP to find the number of vowels, consonants, digits and white spaces in a given string.
#include <stdio.h>

int main() {
  char str1[50], vowel[]="aeiouAEIOU";
  int v=0,c=0,d=0,w=0,rough;
  printf("Enter a string: ");
  gets(str1);
  for (int i=0; str1[i]!='\0'; i++) {
    rough=0;
    for (int j=0; j<10; j++) {
      if (str1[1] == vowel[j]) {
        rough=1;
        break;
      }
    }
    if (rough=1) v++;
    else  if (str1[i]>97 && str1[i]<122) c++;
    else if (str1[i]>48 && str1[i]<57) d++;
    else w++;
  }
  printf("The no. of vowels are %d, consonants are %d, digits are %d, and white space are %d.", v, c, d, w);
  return 0;
}
