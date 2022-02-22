/* WAP to generate the following output:
1
12
123
1234
12345 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    for (int j=1; j<i+1; j++) printf("%d", j);
    printf("\n");
  }
  return 0;
}
