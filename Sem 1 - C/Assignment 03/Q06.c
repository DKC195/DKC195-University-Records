// WAP to display all the Armstrong numbers between 1 to 500.
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++)
    for (int j=0; j<10; j++)
      for (int k=0; k<10; k++)
        if (i*i*i+j*j*j+k*k*k == i*100+j*10+k) printf("The number %d is Armstrong Number.",i*100+j*10+k);
  return 0
}
