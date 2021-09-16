/*Define a structure name Time with its member hr, min and sec.
Write a user defined function named timeDiff() to calculate the difference between two time periods.
The function should take two Time type arguments and also return Time type. WAP to implement the UDF in main program.*/
#include <stdio.h>

struct time {
  int sec;
  int min;
  int hr;
} p[3];

struct time timediff(struct time, struct time);

int main() {
  for (int i = 0; i<2; i++) {
    printf("Time %c\n", 65+i);
    printf("Enter the secs: ");
    scanf("%d", &p[i].sec);
    printf("Enter the minutes: ");
    scanf("%d", &p[i].min);
    printf("Enter the hour: ");
    scanf("%d", &p[i].hr);
  }
  if (p[1].hr<p[0].hr) p[2] = timediff(p[0], p[1]);
  else if (p[1].hr == p[0].hr) {
    if (p[1].min<p[0].min) p[2] = timediff(p[0], p[1]);
    else if (p[1].min == p[0].min) {
      if (p[1].sec<=p[0].sec) p[2] = timediff(p[0], p[1]);
      else p[2] = timediff(p[1], p[0]);
    }
  }
  else p[2]=timediff(p[0], p[1]);
  printf("The diff is %d:%d:%d", p[2].hr, p[2].min, p[2].sec);
  return 0;
}

struct time timediff(struct time x, struct time y) {
  struct time z;
  z.hr=x.hr-y.hr;
  if (x.min<y.min) {
    z.hr--;
    x.min+=60;
  }
  z.min=x.min-y.min;
  if (x.sec<y.sec) {
    z.min--;
    x.sec+=60;
  }
  z.sec=x.sec-y.sec;
  return z;
}
