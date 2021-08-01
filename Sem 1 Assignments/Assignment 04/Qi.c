/* WAP to generate the following output:
1
22
333
4444
55555 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    for (int j=0; j<i; j++) printf("%d", i);
    printf("\n");
  }
  return 0;
}
