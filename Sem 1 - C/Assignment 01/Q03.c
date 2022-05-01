/* WAP to read marks obtained by a student in five subjects.
Read the full max of each subject as well. Print the percentage score by the student. */
#include <stdio.h>

int main()
{
  float a, b, c, d, e, t;

  printf("Enter the marks obtained in Subject A: ");
  scanf("%f", &a);

  printf("Enter the marks obtained in Subject B: ");
  scanf(" %f", &b);
  
  printf("Enter the marks obtained in Subject C: ");
  scanf(" %f", &c);
  
  printf("Enter the marks obtained in Subject D: ");
  scanf(" %f", &d);
  
  printf("Enter the marks obtained in Subject E: ");
  scanf(" %f", &e);
  
  printf("Enter Total Marks:\n");
  scanf(" %f", &t);
  
  printf("The percentage obtained by student is %.2f%%.", ((a + b + c + d + e) / t) * 100);
  
  return 0;
}
