// WAP to write “Purwanchal Campus” to a file, read the content from the file and display it on the screen.
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fpc=fopen("A13Q01.txt", "w");
  char ch;
  if (fpc==NULL) {
    printf("Error!");
    exit(1);
  }
  printf("Enter the Text: (Enter then Ctrl+D is EOF, Enter it in the end)\n");
  while((ch=getchar())!=EOF) fputc(ch,fpc);
  fclose(fpc);
  fpc=fopen("A13Q01.txt", "r");
  if (fpc==NULL) {
    printf("Error!");
    exit(1);
  }
  printf("\nYou have written:\n");
  while((ch=fgetc(fpc))!=EOF) putchar(ch);
  fclose(fpc);
  return 0;
}
