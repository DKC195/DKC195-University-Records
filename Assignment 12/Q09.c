// WAP to count the frequency of each element of array.
#include <stdio.h>

int main() {
  int n,count,count1;
  printf("Enter the number of input: ");
  scanf("%d", &n);
  int a[n];
  for (int i=0; i<n; i++) {
    printf("Enter a number: ");
    scanf("%d", (a+i));
  }
  for (int i=0; i<n; i++) {
    count=0;
    for (int j=0; j<n; j++) {
      if (*(a+i) == *(a+j)) count++;
    }
    count1=0;
    for (int j=0; j<i+1; j++) {
      if (*(a+i) == *(a+j)) count1++;
    }
    if (count1<2) printf("%d is repeated %d times.\n", *(a+i), count);
  }
  return 0;
}
