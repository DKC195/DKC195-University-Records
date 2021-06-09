#include <stdio.h>

int main() {
  int n,m,r1,r2,p1,p2,h,i=1;
  printf("Enter the first number:\n");
  scanf("%d", &n);
  printf("Enter the second number:\n");
  scanf(" %d", &m);
  while(p1!=p2) {
    p1=n*i;
    p2=m*i;
    i++;
  }
  for (i=1; i<n+1; i++) {
    r1=n%i;
    r2=m%i;
    if (r1==0 && r2==0) h=i;
  }
  printf("The HCF is %d.\nAnd the LCM is %d.", h, p1);
  return 0;
}
