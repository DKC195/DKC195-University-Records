// WAP to reverse a given number using function.
#include <stdio.h>
int rev(int x);

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Reverse= %d", rev(n));
  return 0;
}

int rev(int x){
  int y=0;
  for (int i=x; i>0; i/=10) y = y*10+i%10;
  return y;
}
