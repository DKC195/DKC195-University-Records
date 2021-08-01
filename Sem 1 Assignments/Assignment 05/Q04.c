// WAP to read a +ve integer and find the sum of digits using function.
#include <stdio.h>
int sum(int x, int y);

int main() {
  int a,su=0;
  for(int i=1; i>0; i++){
    printf("Enter a number (0 to stop):");
    scanf("%d", &a);
    su=sum(a,su);
    if (a == 0) {
      printf("The sum is %d.", su);
      break;
    }
  }
  return 0;
}

int sum(int x, int y){
  return y+x;
}
