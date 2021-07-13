// WAP to read 3 numbers and find the middle number.
#include <stdio.h>

int main() {
	int a, b, c;
	printf("Enter the first number: ");
	scanf(" %d", &a);
	printf("Enter the second different number: ");
	scanf(" %d", &b);
	printf("Enter the third different number: ");
	scanf(" %d", &c);
	if((b<a && a<c)||(c<a && a<b)) printf("The middle number is %d.", a);
	else if((c<b && b<a)||(a<b && b<c))	printf("The middle number is %d", b);
	else if((a<c && c<b)||(b<c && c<a))	printf("The number is %d.", c);
	else printf("Error some numbers are equal.");
	return 0;
}
