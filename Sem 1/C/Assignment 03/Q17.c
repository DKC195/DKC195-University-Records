// WAP to check whether a number is palindrome or not.
#include <stdio.h>

int main() {
  int n,x=0,z;
  printf("Enter a number: ");
  scanf("%d", &n);
  z=n;
  for (n; n>0; n=n/10) x=x*10+n%10;
  x == z ? printf("The number is palindrome.\n"):printf("The number is not palindrome.\n");
  return 0;
}
