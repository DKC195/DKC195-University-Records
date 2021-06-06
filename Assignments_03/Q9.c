#include <stdio.h>

int main() {
  int x=1,y,b=0;
  for (int c=1; c<256; c++) {
    y=c;
    do {
      b=b+x*(y%2);
      y=y/2;
      x=x*10;
    } while(y>0);
    printf("The ASCII code %c for is %8d \n", c, b);
  }
  return 0;
}
