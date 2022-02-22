// WAP to read numbers from a file and write even, odd to separate file.
#include <stdio.h>

int main() {
  FILE *fnum = fopen("q02.txt","w");
  int n=0;
  if (fnum == NULL) {
    printf("Error: could not open file");
    return 1;
  }

  printf("Enter numbers with space for new number [Enter negative number to exit]: \n");
  while (n>=0) {
    scanf("%d", &n);
    putw(n, fnum);
  }
  fclose(fnum);

  FILE *fodd = fopen("q02odd.txt", "w");
  FILE *feven = fopen("q02even.txt", "w");

  fnum = fopen("q02.txt","r");
  while((n = getw(fnum)) >=0) {
    if (n%2 == 0) putw(n, feven);
    else putw(n, fodd);
  }
  fclose(fnum);
  fclose(feven);
  fclose(fodd);

  feven = fopen("q02even.txt", "r");
  printf("\n\nEven Number File:\n");
  while((n = getw(feven)) != EOF) printf("%d, ", n);
  fclose(feven);

  fodd = fopen("q02odd.txt", "r");
  printf("\n\nEven Number File:\n");
  while((n = getw(fodd)) != EOF) printf("%d, ", n);
  fclose(fodd);

  return 0;
}
