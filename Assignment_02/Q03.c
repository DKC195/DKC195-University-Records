//WAP to read a year and check whether it is leap year or not. (Note: A year is leap year if it is divisible only by 4 or by 4,100 and 400)
#include <stdio.h>

int main() {
	int x,y;
	printf("Enter the year:\n");
	scanf("%d", &y);
	x=y%4;
	if(x==0) printf("The year %d is a leap year.",y);
	else printf("The year %d is not a leap year",y);
	return 0;
}




