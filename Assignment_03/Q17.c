//WAP to check whether a number is palindrome or not.
#include <stdio.h>

int main() {
  int n,x=0,y,z;
  printf("Enter a number:\n");
  scanf("%d", &n);
  z=n;
  for (n; n>0; n=n/10) {
    y=n%10;
    x=x*10+y;
  }
  x==z?printf("The number is palindrome.\n"):printf("The number is not palindrome.\n");
  return 0;
}
