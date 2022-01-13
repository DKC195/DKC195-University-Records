// Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.
#include <stdio.h>

// int search(char, int);
int strleng(char*);

int main()
{
  int n;
  char sth[40] = "idea without execution is worthless";
  char* sth2 = sth[0];
  printf("%d\n", sth2);
  printf("%d\n", &sth2);
  printf("%c\n", *&sth2);
  printf("%c\n", *(sth2+1));
  n = strleng(&sth2);
  printf("%d", n);
  return 0;
}

// int search(char sth2, int n)
// {
//   char c = "c";
//   for (int i = 0; i < n; i++)
//   {
//     /* code */
//   }

//   return;
// }

int strleng(char* sth2)
{
  int i = 0;
  printf("%d\n", &sth2);
  printf("%c\n", *sth2);
  while (*(sth2+i) != "/0")
  {
    i++;
  }
  return i;
}

