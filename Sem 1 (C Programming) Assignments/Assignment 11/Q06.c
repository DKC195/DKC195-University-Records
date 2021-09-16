/*Define a structure named Student having members name and rollno.
WAP to read record of 10 students. Sort the students record in ascending order according to their roll numbers.*/
#include <stdio.h>

struct student {
  char name[20];
  int roll;
} p[10],q[10],tmp;

int main() {
  for (int i=0; i<10; i++) {
    printf("\nStudent %d\n", i+1);
    printf("Enter Name: ");
    scanf("%s", p[i].name);
    printf("Enter Roll No.: ");
    scanf("%d", &p[i].roll);
  }
  for (int i=0; i<10; i++) {
    q[i] = p[i];
    for (int j=i; j<10; j++) {
      if (q[i].roll>p[j].roll) {
        tmp = q[i];
        q[i] = p[j];
        p[j] = tmp;
      }
    }
  }
  for (int i=0; i<10; i++) {
    printf("\nStudent %d\n", i+1);
    printf("Name: \t\t %s \n", q[i].name);
    printf("Roll No.: \t %d\n", q[i].roll);
  }
  return 0;
}
