#include <stdio.h>
#include <math.h>

int main() {
    int x,n;
    printf("Enter the first number:\n");
    scanf("%d", &x);
    printf("Enter the power to be raised:\n");
    scanf(" %d", &n);
    x=pow(x,n);
    printf("The answer is %d.", x);
    return 0;
}
