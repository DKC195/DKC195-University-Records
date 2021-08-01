// WAP to display all the characters and the ASCII values whose ASCII ranges from 1 to 255.
#include <stdio.h>

int main() {
  for (int c=1; c<256; c++) printf("The ASCII code %c for is %3d", c, c);
  return 0;
}
