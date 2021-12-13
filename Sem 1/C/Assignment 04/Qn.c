/* WAP to generate the following output:
12345
2345
345
45
5 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    int a=i;
    for (int j=7; j>i+1; j--) {
      printf("%d", a);
      a++;
    }
    printf("\n");
  }
  return 0;
}
