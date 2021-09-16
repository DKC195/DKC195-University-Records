/*Define a structure named Student having members name, rollno and marks in 5 subjects.
WAP to read record of 10 students. Calculate total marks and percentage of each student and print them.*/
#include <stdio.h>

struct marks {
  int sub[5];
};

struct student {
  char name[20];
  int roll;
  struct marks mark;
  int total;
} p[10];

int main() {
  for (int i=0; i<10; i++) {
    p[i].total=0;
    printf("\nStudent %d\n", i+1);
    printf("Enter Name: ");
    scanf("%s", p[i].name);
    printf("Enter Roll No.: ");
    scanf("%d", &p[i].roll);
    for (int j=0; j<5; j++) {
      printf("Enter marks on Subject %c: ", 65+j);
      scanf("%d", &p[i].mark.sub[j]);
      p[i].total = p[i].total+p[i].mark.sub[j];
    }
  }
  for (int i=0; i<10; i++) {
    printf("\nStudent %d\n", i+1);
    printf("Name: \t\t %s \n", p[i].name);
    printf("Roll No.: \t %d\n", p[i].roll);
    printf("Total Marks: \t %d\n", p[i].total);
    printf("Percentage: \t %d\n", p[i].total/5);
  }
  return 0;
}
