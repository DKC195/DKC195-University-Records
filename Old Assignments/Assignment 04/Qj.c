/* WAP to generate the following output:
 1
 2 3
 4 5 6
 7 8 910
1112131415 */
#include <stdio.h>

int main() {
  int x=0;
  for (int i=1; i<6; i++) {
    for (int j=0; j<i; j++) {
      x++;
      printf("%3d", x);
    }
    printf("\n");
  }
  return 0;
}
