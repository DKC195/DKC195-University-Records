/*WAP to generate the following output:
*****
****
***
**
* */
#include <stdio.h>

int main() {
  for (int i=5; i>0; i--) {
    for (int j=0; j<i; j++) printf("*");
    printf("\n");
  }
  return 0;
}
