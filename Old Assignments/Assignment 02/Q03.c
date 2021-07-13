// WAP to read a year and check whether it is leap year or not. (Note: A year is leap year if it is divisible only by 4 or by 4, 100 and 400)
#include <stdio.h>

int main() {
	int x, y;
	printf("Enter the year: ");
	scanf("%d", &y);
	(y%4 == 0) ? printf("The year %d is a leap year.", y): printf("The year %d is not a leap year", y);
	return 0;
}




