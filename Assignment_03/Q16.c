#include <stdio.h>

int main() {
  int n,m,h,l;
  printf("Enter the numbers:\n");
  scanf("%d\n%d", &n, &m);
  for (h=n; h>0; h--) {
    if (n%h==0 && m%h==0) break;
  }
  printf("The HCF is %d.\n", h);
  l=(n*m)/h;
  printf("And The LCM is %d.", l);
  return 0;
}
