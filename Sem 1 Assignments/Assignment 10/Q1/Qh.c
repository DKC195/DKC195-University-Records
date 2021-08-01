// Define a structure named Point with its members: Point(x, y)
#include <stdio.h>

struct point {
  int x;
  int y;
};

int main() {
  int n;
  printf("Enter the no. of Points: ");
  scanf("%d", &n);
  struct point p[n];
  for (int i=0; i<n; i++) {
    printf("\nPoint %c\n", 65+i);
    printf("X: ");
    scanf("%d", &p[i].x);
    printf("Y: ");
    scanf("%d", &p[i].y);
  }
  printf("The Points are:\n");
  for (int i=0; i<n; i++) {
    printf("%c", 65+i);
    printf("( x, y)=( %d, %d)\n", p[i].x, p[i].y);
  }
  return 0;
}
