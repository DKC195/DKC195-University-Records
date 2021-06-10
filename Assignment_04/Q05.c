/*WAP to generate the follwing output:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * */
#include <stdio.h>

int main() {
  for (int i=1; i<11; i+=2) {
    for (int k=9; k>i; k--) {
      printf(" ");
    }
    for (int j=0; j<i; j++) {
      printf(" *");
    }
    printf("\n");
  }
  return 0;
}
