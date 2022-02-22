/* WAP to calculate the area of a triangle given the length of its sides.
But for three sides to form a triangle,  the sum of two sides must be greater than the third.
(hints: ,  area=  ,  where a, b, c are length of 3 sides. */
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, s, A, h;
	printf("Length of First Side: ");
	scanf("%d", &a);
	printf("Length of Second Side: ");
	scanf("%d", &b);
	printf("Length of Third Side: ");
	scanf("%d", &c);
	s=(a+b+c)/2;
	h=(s*(s-a)*(s-b)*(s-c));
	if(h<0) printf("The numbers you entered can't form triangle");
	else{
  	A = pow(h, 0.5);
	  printf("The area of triangle is %d. ", A);
	}
	return 0;
}
