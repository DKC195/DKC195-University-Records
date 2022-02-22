// WAP to read two numbers  and find its HCF and LCM.
#include <stdio.h>

int main() {
  int n,m,h;
  printf("Enter the numbers: ");
  scanf("%d\n%d", &n, &m);
  for (h=n; h>0; h--) if (n%h == 0 && m%h == 0) break;
  printf("The HCF is %d.\n", h);
  printf("And The LCM is %d.", l = (n*m)/h);
  return 0;
}
