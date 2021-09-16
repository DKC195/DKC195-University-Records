/* WAP to generate the following output:
10101
01010
10101
01010
10101 */
#include <stdio.h>

int main() {
  for (int i=0; i<5; i++) {
    for (int j=i+1; j<i+6; j++) printf("%d", j%2);
    printf("\n");
  }
  return 0;
}
