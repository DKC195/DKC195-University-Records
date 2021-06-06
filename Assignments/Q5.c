#include <stdio.h>

int main() {
  int v,w,x,y,z;

  printf("Enter a Number:\n");
  scanf("%d", &x);

  y=x/2;
  y=y+1;

  for (w=1; w<y; w++) {
    z=x%(w+1);

    if (z==0) {
      break;
    }
  }

  printf("%d\n", z);

  if (z==0) {
    printf("The number %d is not a prime number.\n", x);
  }
  else {
    printf("The number %d is a prime number.\n", x);
  }

  return 0;
}
