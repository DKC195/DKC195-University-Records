/* If a five digit number is input through the keyboard. Calculate the sum of its digits.
Reverse the numbers. Sum of the first and last digits. */
#include <stdio.h>

int main() {
	int num, a, b, c, d, e;
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	e = num%10;
	d = ((num/10)%10);
	c = ((num/100)%10);
	b = ((num/1000)%10);
	a = ((num/10000)%10);
	printf("The sum if its digits is %d.\n", a+b+c+d+e);
	printf("The reverse of the numbers is %d.\n", e*10000+d*1000+c*100+b*10+a);
	printf("The sum of first and last digit is %d.\n", a+e);
	return 0;
}
