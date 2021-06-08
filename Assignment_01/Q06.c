//WAP to read two numbers and swap their values.
#include <stdio.h>

int main() {
	int a,b,c,d;
	printf("Enter a two digit number:\n");
	scanf("%d",&a);
	c=a%10;
	d=a/10;
	b=(c*10)+d;
	printf("The interchanged form is %d.",b);
	return 0;
}
