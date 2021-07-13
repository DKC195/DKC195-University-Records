// WAP to print odd numbers from 200 to 250.
#include <stdio.h>

int main() {
  int x;
  for (x=200; x<250; x++) if (x%2 == 1) printf("%d\n", x);
  return 0;
}
