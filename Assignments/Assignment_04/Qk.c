/*WAP to generate the follwing output:
    1
   121
  12321
 1234321
123454321 */
#include <stdio.h>

int main() {
  for (int i=1; i<6; i++) {
    for (int k=0; k<6-i; k++) printf(" ");
    int j;
    for (int j=1; j<i+1; j++) printf("%d", j);
    for (int l=1; l<i; l++) printf("%d", j--);
    printf("\n");
  }
  return 0;
}
