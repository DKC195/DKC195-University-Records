//WAP to read time into the second and convert it into hour, minute and second.
#include <stdio.h>

int main() {
	int g,h,m,s;
	printf("Enter the time in total seconds:\n");
	scanf("%d",&g);
	s=g%60;
	h=g/3600;
	m=g/60-h*60;
	printf("The time is %d hours %d minutes %d seconds",h,m,s);
	return 0;
}
