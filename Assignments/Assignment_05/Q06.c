// WAP to convert a given lowercase to uppercase using function.
#include <stdio.h>

char l2u(char x);

int main() {
  char l,u;
  printf("Enter a lowercase letter:\n");
  scanf("%c", &l);
  u=l2u(l);
  printf("%c is the uppercase of %c", u, l);
  return 0;
}

char l2u(char x){
  x=x-32;
  return x;
}
