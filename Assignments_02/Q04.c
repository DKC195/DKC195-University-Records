//WAP to find all possible roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,x,y,p;
	printf("Enter the coefficient of x^2:\n");
	scanf("%f",&a);
	printf("Enter the coefficient of x:\n");
	scanf(" %f",&b);
	printf("Enter the constant: \n");
	scanf(" %f",&c);
	p=pow((b*b)-(4*a*c),0.5);
	x=(-b+p)/(2*a);
	y=(-b-p)/(2*a);
	printf("The possible roots of tge quadratic equation are %.2f and %.2f.",x,y);
	return 0;
}
