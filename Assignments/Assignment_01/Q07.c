/* If a five digit number is input through the keyboard. Calculate the sum of its digits.
Reverse the numbers. Sum of the first and last digits. */
#include <stdio.h>

int main() {
	int num,a,b,c,d,e,ansi,ansii,ansiii;
	printf("Enter a five digit number:\n");
	scanf("%d",&num);
	e=num%10;
	d=((num/10)%10);
	c=((num/100)%10);
	b=((num/1000)%10);
	a=((num/10000)%10);
	ansi=a+b+c+d+e;
	ansii=e*10000+d*1000+c*100+b*10+a;
	ansiii=a+e;
	printf("The sum if its digits is %d.\n",ansi);
	printf("The reverse of the numbers is %d.\n",ansii);
	printf("The sum of first and last digit is %d.\n",ansiii);
	return 0;
}
