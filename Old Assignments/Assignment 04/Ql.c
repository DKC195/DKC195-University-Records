/* WAP to generate the following output:
1
26
3710
481113
59121415 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    printf("%d", i);
    int a=4,k=i;
    for (int j=1; j<i; j++) {
      printf("%d",k = k+a);
      a--;
    }
    printf("\n");
  }
  return 0;
}
