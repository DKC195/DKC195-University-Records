// WAP to read record of 10 Students(name, rollno, marks) and store in a file “ioe.txt”. Print all the record of students who obtained greater or equals to 40 marks.
#include <stdio.h>

struct student {
  char name[20];
  int roll, marks;
} details ;

int main() {
  FILE *ioe = fopen("ioe.txt", "w");

  if (ioe == NULL) {
    printf("Error!");
    return 1;
  }

  for (int i=0; i<10; i++) {
    printf("\nStudent %c\n", i+65);
    printf("Enter Name:");
    scanf("%s", details.name);
    printf("Enter Roll:");
    scanf(" %d", &details.roll);
    printf("Enter Marks:");
    scanf(" %d", &details.marks);
    fprintf(ioe,"%s\n%d\n%d\n", details.name, details.roll, details.marks);
  }
  fclose(ioe);

  ioe = fopen("ioe.txt", "r");
  printf("\nNo.\tName\tRoll\tMarks\n");
  int i=0;
  while (fscanf(ioe, "%s\n%d\n%d\n", details.name, &details.roll, &details.marks) != EOF) {
    printf("%d\t%s\t%d\t%d\n", i+1, details.name, details.roll, details.marks);
    i++;
  }
  fclose(ioe);

  return 0;
}
