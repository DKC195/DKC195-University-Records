//WAP to read 10 elements in an array and find the minimum.
#include <stdio.h>

int main() {
  int a[10],min=0;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
    if (min>a[i]) min=a[i];
  }
  printf("The minimum number is %d.", min);
  return 0;
}
