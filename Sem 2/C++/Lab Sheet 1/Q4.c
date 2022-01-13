/* Write a program to read name, rollno, address, and phone number of each student in your class using structure. 
Store the information in file so that you can recover the information later. While recovering the information from 
the file sort the information alphabetically according to the name. */

#include <stdio.h>

struct student
{
  char name[30];
  int roll;
  char address[50];
  int pno;
};

int main()
{
  int n;
  FILE *fptr;
  fptr = fopen("students.txt", "w");

  printf("Enter The No. Of Student:\n");
  scanf("%d", &n);
  struct student std[n];
  if (fptr == NULL)
  {
    printf("Error");
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      printf("Student No. %d", i + 1);
      printf("Enter Name: ");
      scanf("%s", std[i].name);
      printf("Enter Roll No.: ");
      scanf("%d", std[i].roll);
      printf("Enter Address: ");
      scanf("%s", std[i].address);
      printf("Enter Phone No.: ");
      scanf("%d", std[i].pno);
      fwrite(&std[i], sizeof(std[i]), 1, fptr);
    }
  }

  fclose(fptr);
  return 0;
}