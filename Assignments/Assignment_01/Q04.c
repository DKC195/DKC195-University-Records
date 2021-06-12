//WAP to read temperature in Fahrenheit and convert it into centigrade. C=5/9(F-32)
#include <stdio.h>

int main() {
	float c,f;
	printf("Enter the temprature in F: \n");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("The temprature in C is %.2f. ",c);
	return 0;
}
