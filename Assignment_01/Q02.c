//WAP to read the distance between two cities (in km) and display the distance in meters, feet, inches and centimeters.
#include <stdio.h>

int main() {
	float d,x;
	printf("Enter the distance in KM:\n");
	scanf("%f",&km);
	d=km*1000;
	printf("The distance in meters is %.2f m.",d);
	d=km*3280.84;
	printf("\nThe distance in feet is %.2f ft.",ft);
	d=d*12;
	printf("\nThe distance in inch is %.2f in.",in);
	d=km*100;
	printf("\nThe distance in centimeters is %.2f cm.",cm);
	return 0;
}
