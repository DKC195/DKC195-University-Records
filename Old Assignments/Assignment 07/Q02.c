// WAP to read 10 elements in an array and count the occurence of odd and even.
#include <stdio.h>

int main() {
  int a[10],o=0,e=0;
  for (int i=0; i<10; i++) {
    printf("Ender a number: ");
    scanf("%d", &a[i]);
    (a[i]%2 == 0) ? e++ : o++;
  }
  printf("The no. of even numbers are %d and odd numbers are %d.", e, o);
  return 0;
}
