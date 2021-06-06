#include <stdio.h>

int main() {
  int x,y;
  for (int i=1; i<6; i++) {
    for (int j=0; j<10; j++) {
      for (int k=0; k<10; k++) {
        x=i*i*i+j*j*j+k*k*k;
        y=i*100+j*10+k;
        if (x==y) printf("The number %d is Armstrong Number\n",x);
        else {}
      }
    }
  }
  return 0;
}
