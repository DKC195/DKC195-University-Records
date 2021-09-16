/* WAP to generate the following output:
13579
3579
579
79
9 */
#include <stdio.h>

int main() {
  for (int i=2; i<12; i+=2) {
    for (int j=i-1; j<10; j+=2) printf("%d", j);
    printf("\n");
  }
  return 0;
}
