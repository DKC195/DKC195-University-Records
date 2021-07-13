// WAP to copy a content of one file to another file.
#include <stdio.h>

int main() {
  FILE *f1 = fopen("sample1.txt", "r");
  FILE *f2 = fopen("output.txt", "w");
  char ch;
  if (f1 == NULL || f2 == NULL) {
    printf("Error!");
    return 1;
  }

  f1 = fopen("sample1.txt", "r");
  while((ch = fgetc(f1)) != EOF) fputc(ch,f2);
  fclose(f1);
  fclose(f2);

  printf("You Copied Text is:\n");
  f2 = fopen("output.txt", "r");
  while((ch = fgetc(f2)) != EOF) putchar(ch);
  fclose(f2);

  return 0;
}
