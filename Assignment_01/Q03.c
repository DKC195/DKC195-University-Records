//WAP to read marks obtained by a student in five subjects. Read the full max of each subject as well. Print the percentage score by the student.
#include <stdio.h>

int main() {
	float a,b,c,d,e,t,x,p;
	printf("Enter the marks obtained in Subject A:\n");
	scanf("%f",&a);
	printf("Enter the marks obtained in Subject B:\n");
	scanf(" %f",&b);
	printf("Enter the marks obtained in Subject C:\n");
	scanf(" %f",&c);
	printf("Enter the marks obtained in Subject D:\n");
	scanf(" %f",&d);
	printf("Enter the marks obtained in Subject E:\n");
	scanf(" %f",&e);
	printf("Enter Total Marks:\n");
	scanf(" %f",&t);
	x=a+b+c+d+e;
	p=(x/t)*100;
	printf("The percentage obtained by student is %.2f%%.",p);
	return 0;
}
