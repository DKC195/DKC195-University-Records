WAP to read an alphabet and convert it into Uppercase if it is lowercase and vice versa.

#include <stdio.h>

int main()
{
	char a;

	printf("Write an Alphabet:\n");
	scanf("%c",&a);

	if(a<97)
	{
	    a=a+32;
	    printf("The lower case is %c",a);
	}
	else
	{
	    a=a-32;
	    printf("The upper case is %c",a);
	}

	return 0;
}
WAP to read a year and check whether it is leap year or not. (Note: A year is leap year if it is divisible only by 4 or by 4,100 and 400)

#include <stdio.h>

int main()
{
	int x,y;

	printf("Enter the year:\n");
	scanf("%d", &y);

	x=y%4;

	if(x==0)
	{
		printf("The year %d is a leap year.",y);
	}
	else
	{
		printf("The year %d is not a leap year",y);
	}


	return 0;
}


WAP to find all possible roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,x,y,p;

	printf("Enter the coefficient of x^2:\n");
	scanf("%f",&a);
	printf("Enter the coefficient of x:\n");
	scanf(" %f",&b);
	printf("Enter the constant: \n");
	scanf(" %f",&c);

	p=pow((b*b)-(4*a*c),0.5);
	x=(-b+p)/(2*a);
	y=(-b-p)/(2*a);

	printf("The possible roots of tge quadratic equation are %.2f and %.2f.",x,y);

	return 0;
}

WAP to calculate the area of a triangle given the length of its sides. But for three sides to form a triangle, the sum of two sides must be greater than the third. (hints: , area=  , where a,b,c are length of 3 sides.

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,s,A,h;

	printf("Length of First Side:\n");
	scanf("%d",&a);
	printf("Length of Second Side:\n");
	scanf("%d",&b);
	printf("Length of Third Side:\n");
	scanf("%d",&c);

	s=(a+b+c)/2;
	h=(s*(s-a)*(s-b)*(s-c));

	if(h<0)
	{
	    printf("The numbers you entered can't form triangle");
	}
	else
	{
	    A=pow(h,0.5);
	    printf("The area of triangle is %d. ",A);
	}

	return 0;
}

WAP to read a 3 digit number and check whether it is Armstrong number or not. (For example, 123=(1*1*1)+(2*2*2)+(3*3*3) is a Armstrong number.)

#include <stdio.h>

int main()
{
	int d,a,b,c,x;

	printf("Armstrong Number Test \n Enter the three digit number: \n");
	scanf("%d",&d);

	a=d/100;
	b=(d%100)/10;
	c=d%10;

	x=a*a*a+b*b*b+c*c*c;

	if(x==d)
	{
	    printf("The number is Armstrong Number.");
	}
	else
	{
	    printf("Do you even know what Armstrong Number is?");
	}

	return 0;

WAP to read two numbers and an arithmetic operator and perform the corresponding arithmetic operation on those numbers. (Using both else if and switch ).

Using else if

#include <stdio.h>

int main()
{
	char c;
	int x,y;

	printf("Enter your arithematic operator (+, -, *, /):\n");
	scanf("%c",&c);
	printf("Enter your first number:\n");
	scanf("%d",&x);
	printf("Enter your second number:\n");
	scanf("%d",&y);


	if(c=='+')
	{
	    printf("The sum is %d",x+y);
	}
	else if(c=='-')
	{
	    printf("The difference is %d",x-y);
	}
	else if(c=='*')
    {
        printf("The product is %d",x*y);
    }
	else if(c=='/')
	{
	    printf("The quotient is %d",x/y);
	}
    else
	{
	    printf("Choose a proper operator");
	}

	return 0;
}
Using Switch

#include <stdio.h>

int main()
{
	char c;
	int x,y;

	printf("Enter your arithematic operator (+, -, *, /):\n");
	scanf("%c",&c);
	printf("Enter your first number:\n");
	scanf("%d",&x);
	printf("Enter your second number:\n");
	scanf("%d",&y);

	switch(c)
	{
	    case '+':
	        printf("The sum is %d",x+y);
	        break;
	    case '-':
	        printf("The difference is %d",x-y);
	        break;
	    case '*':
	        printf("The product is %d",x*y);
	        break;
	    case '/':
	        printf("The quotient is %d",x/y);
	        break;
	    default:
	        printf("Choose a proper operator");
	}

	return 0;
}


