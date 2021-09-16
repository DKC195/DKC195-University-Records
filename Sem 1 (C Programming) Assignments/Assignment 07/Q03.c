// WAP to read 10 elements in an array and copy all the elements to another array.
#include <stdio.h>

int main() {
  int a[10],b[10];
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  for (int i=0; i<10; i++) {
    b[i] = a[i];
    printf("b[%d]=%d \n", i,b[i]);
  }
  return 0;
}
