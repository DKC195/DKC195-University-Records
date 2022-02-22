/* WAP to generate the following output:
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A*/
#include<stdio.h>

int main(){
  for (int i=0; i<7; i++){
    for (int j=0; j<7; j++){
      if(j<7-i) printf("%c ", (char)j+65);
      else printf("  ");
    }
    for (int j=0; j<6; j++){
      if(j>i-2) printf("%c ", 70-(char)j);
      else printf("  ");
    }
    printf("\n");
    }
    return 0;
}
