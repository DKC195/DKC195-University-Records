// WAP to write “Purwanchal Campus” to a file, read the content from the file and display it on the screen.
#include <stdio.h>

int main() {
  FILE *fpc = fopen("output.txt", "w");
  if (fpc == NULL) {
    printf("Error!");
    return 1;
  }

  fputs("Purwanchal Campus", fpc);
  fclose(fpc);

  fpc = fopen("output.txt", "r");
  printf("You have written:\n");
  while((ch = fgetc(fpc)) != EOF) putchar(ch);
  fclose(fpc);

  return 0;
}
