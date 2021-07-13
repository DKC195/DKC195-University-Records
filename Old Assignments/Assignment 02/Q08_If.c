/* WAP to read percentage scored by a student and print the corresponding division. (Using both else if and switch ).
	Percent		 Division
 		>80  		Distinction
	60-70		First Division
	50-59   Second Division
	40-49  	Third Division
 	 <40				Fail
Using Else If */
#include <stdio.h>

int main() {
	float p;
	int d;
	printf("What is your percentage: ");
	scanf("%f", &p);
	d = p/10;
	if(d>7) printf("Your division is Distinction");
	else if(d == 7) printf("Your division is First Division");
	else if(d == 6) printf("Your division is Second Division");
	else if(d == 5) printf("Your division is Third Division");
	else if(d == 4) printf("Your division is third division.");
	else if(d<40) printf("You have failed in exam.");
	else printf("Did you fail in Exam?");
	return 0;
}
