/* WAP to read a 3 digit number and check whether it is Armstrong number or not.
(For example,  123=(1*1*1)+(2*2*2)+(3*3*3) is a Armstrong number.) */
#include <stdio.h>

int main() {
	int d, a, b, c, x;
	printf("Armstrong Number Test \nEnter the three digit number: ");
	scanf("%d", &d);
	a = d/100;
	b = (d%100)/10;
	c = d%10;
	x = a*a*a+b*b*b+c*c*c;
	(x == d) ? printf("The number is Armstrong Number."): printf("Do you even know what Armstrong Number is?");
	return 0;
}

