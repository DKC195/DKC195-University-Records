/* WAP to generate the following output:
1
11
111
1111
11111 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    for (int j=0; j<i; j++) printf("1");
    printf("\n");
  }
  return 0;
}
