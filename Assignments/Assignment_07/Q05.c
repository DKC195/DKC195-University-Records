//WAP to seperate odd and even integers in seperate arrays.
#include <stdio.h>

int main() {
  int n, m, a=0, b=0;
  printf("Enter the no of inputs: ");
  scanf("%d", &n);
  int e[n], o[n];
  for (int i=0; i<n; i++) {
    printf("Enter a number: ");
    scanf("%d", &m);
    if(m%2==0) {
      e[a]=m;
      a++;
    }
    else {
      o[b]=m;
      b++;
    }
  }
  printf("The even numbers are %d, ", e[0]);
  for (int i=1; i<a; i++) {
    printf("%d, ", e[i]);
  }
  printf("\nThe odd numbers are %d, ", o[0]);
  for (int i=1; i<b; i++) {
    printf("%d, ", o[i]);
  }
  return 0;
}
