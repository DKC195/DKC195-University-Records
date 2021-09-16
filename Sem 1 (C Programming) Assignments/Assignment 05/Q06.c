// WAP to convert a given lowercase to uppercase using function.
#include <stdio.h>
char l2u(char);

int main() {
  char l;
  printf("Enter a lowercase letter: ");
  scanf("%c", &l);
  printf("%c is the uppercase of %c", l2u(l), l);
  return 0;
}

char l2u(char x){
  return x-32;
}
