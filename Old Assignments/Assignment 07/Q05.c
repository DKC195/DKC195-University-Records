// WAP to separate odd and even integers in separate arrays.
#include <stdio.h>

int main() {
  int n, m, a=0, b=0;
  printf("Enter the no of inputs: ");
  scanf("%d", &n);
  int e[n], o[n];
  for (int i=0; i<n; i++) {
    printf("Enter a number: ");
    scanf("%d", &m);
    if(m%2 == 0) {
      e[a] = m;
      a++;
    }
    else {
      o[b] = m;
      b++;
    }
  }
  printf("The even numbers are ");
  for (int i=0; i<a; i++) printf("%d, ", e[i]);
  printf("\nThe odd numbers are");
  for (int i=0; i<b; i++) printf("%d, ", o[i]);
  return 0;
}
