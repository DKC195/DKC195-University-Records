// WAP to merge two file to third file.
#include <stdio.h>

int main() {
  FILE *f1 = fopen("sample1.txt", "r");
  FILE *f2 = fopen("sample2.txt", "r");
  FILE *f3 = fopen("output.txt", "w");
  char ch;
  if (f1 == NULL || f2 == NULL || f3 == NULL ) {
    printf("Error!");
    return 1;
  }

  f1 = fopen("sample1.txt", "r");
  while((ch = fgetc(f1)) != EOF) fputc(ch,f3);
  fclose(f1);

  f2 = fopen("sample2.txt", "r");
  while((ch = fgetc(f2)) != EOF) fputc(ch,f3);
  fclose(f1);
  fclose(f3);

  printf("You Merged Text is:\n");
  f3 = fopen("output.txt", "r");
  while((ch = fgetc(f3)) != EOF) putchar(ch);
  fclose(f3);

  return 0;
}
