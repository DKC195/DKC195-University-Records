// WAP to find all possible roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, p;
	printf("Enter the coefficient of x^2: ");
	scanf("%f", &a);
	printf("Enter the coefficient of x: ");
	scanf(" %f", &b);
	printf("Enter the constant: ");
	scanf(" %f", &c);
	p=pow((b*b)-(4*a*c), 0.5);
	printf("The possible roots of tge quadratic equation are %.2f and %.2f.", (-b-p)/(2*a), (-b+p)/(2*a));
	return 0;
}
