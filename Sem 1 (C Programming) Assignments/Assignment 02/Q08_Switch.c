/* WAP to read percentage scored by a student and print the corresponding division. (Using both else if and switch ).
    Percent         Division
     >80          Distinction
    60-70        First Division
    50-59       Second Division
    40-49       Third Division
     <40            Fail
     Using Switch */
#include <stdio.h>

int main() {
	float p;
	int d;
	printf("What is your percentage: ");
	scanf("%f", &p);
	d = p/10;
	switch(d) {
		case 10:
		case 9:
		case 8: printf("Your division is Distinction");
			break;
		case 7: printf("Your division is First Division");
			break;
		case 6: printf("Your division is Second Division");
			break;
		case 5: printf("Your division is Third Division");
			break;
		case 4: printf("Your division is third division.");
			break;
		case 3:
		case 2:
		case 1: printf("You have failed in exam.");
			break;
		default: printf("Did you fail in Exam?");
	}
	return 0;
}
