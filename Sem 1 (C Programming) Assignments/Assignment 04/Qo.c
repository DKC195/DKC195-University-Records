/* WAP to generate the following output:
11111
00000
11111
00000
11111 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    for (int j=1; j<6; j++) printf("%d", i%2);
    printf("\n");
  }
  return 0;
}
