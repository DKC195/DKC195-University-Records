#include <stdio.h>

int main() {
  int n,m;
  printf("Enter the first number:\n");
  scanf("%d", &n);
  printf("Enter the second number:\n");
  scanf(" %d", &m);
  int a1,a2,a;
  for (int i=1; i<n+1; i++) {
    a1=n%i;
    a2=m%i;
    if (a1==0 && a2==0) a=i;
  }
  printf("The HCF is %d.\n",a);
  int p1,r;
  for (int i=1; i<m+1; i++) {
    p1=n*i;
    r=p1%m;
    if (r==0) break;
  }
  printf("And The LCM is %d.", p1);
  return 0;
}
