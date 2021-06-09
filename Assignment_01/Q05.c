/*The length and width of a rectangle and radius of a circle or input through the keyboard.
WAP to calculate the area and perimeter of the rectangle and the area and circumference of the circle.*/
#include <stdio.h>
#define pi 3.14

int main() {
	float l,b,r,a,p;
	printf("Enter the length of rectangle:\n");
	scanf("%f",&l);
	printf("Enter the breath of rectangle:\n");
	scanf(" %f",&b);
	printf("Enter the radius of rectangle:\n");
	scanf(" %f",&r);
	a=l*b;
	p=2*(l+b);
	printf("The area and perimeter of rectangle are %.2f and %.2f respectively.",a,p);
	a=pi*r*r;
	p=2*pi*r;
	printf("The area and circumference of Circle are %.2f and %.2f respectively. ",a,p);
	return 0;
}
