// WAP insert new value in the array. (sorted list)
#include <stdio.h>

int main() {
  int a[10],n,x,min;
  for (int i=0; i<10; i++) {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
  min = a[0];
  printf("The values are: ");
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (a[i]>a[j]) {
        min = a[j];
        a[j] = a[i];
        a[i] = min;
      }
    }
    printf("%d, ", a[i]);
  }
  insert:
  printf(".\nEnter the position you want to enter the new array: ");
  scanf("%d", &n);
  if (0>n || n>10) {
    printf("Enter a positive number less than 11.");
    goto insert;
  }
  else {
    printf("Enter a number:");
    scanf("%d", &x);
    a[n-1]=x;
  }
  printf("The new order is ");
  for (int i=0; i<10; i++) {
    for (int j=i; j<10; j++) {
      if (a[i]>a[j]) {
        min=a[j];
        a[j]=a[i];
        a[i]=min;
      }
    }
    printf("%d, ", a[i]);
  }
  return 0;
}
