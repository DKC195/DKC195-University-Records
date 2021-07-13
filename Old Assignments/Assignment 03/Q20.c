// WAP to dispaly the n terms of square natural number and their sum. (1 4 9 16 25 ... n^2)
#include <stdio.h>

int main() {
  int n,x,s;
  printf("Enter the natural number n: ");
  scanf("%d", &n);
  if (n<1) printf("The Number is not natural.");
  else {
    for (int i=1; i<n+1; i++) {
      x = i*i;
      printf("The square of %d is %d.", i, x);
      s = s+x;
    }
  }
  printf("The sum of square is %d.", x);
  return 0;
}
