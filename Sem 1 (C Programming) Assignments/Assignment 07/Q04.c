// WAP to read 10 elements in an array and copy all elements in reverse order in another array.
#include <stdio.h>

int main() {
  int a[10],b[10],j;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  for (int i=1; i<10; i++) {
    j=10-i;
    b[i] = a[j];
    printf("b[%d]=%d \n", i,b[i]);
  }
  return 0;
}
