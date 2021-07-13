// WAP to read 10 elements in an array and search for a particular number among the array list.
#include <stdio.h>

int main() {
  int a[10],n,t;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  printf("Enter the number you are searching for: ");
  scanf("%d", &n);
  for (int j=0; j<10; j++) {
    if (n == a[j]) {
      printf("The number %d is a[%d].\n", n, j);
      t=1;
    }
    else if (t == 0) printf("The number is not on the array");
  }
  return 0;
}
