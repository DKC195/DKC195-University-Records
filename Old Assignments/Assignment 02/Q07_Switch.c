/* WAP to read two numbers and an arithmetic operator and perform the corresponding arithmetic operation on those numbers. (Using both else if and switch ).
 Using Switch */
#include<stdio.h>

int main(){
	char c;
	int x, y;
	printf("Enter your arithematic operator (+,  -,  *,  /): ");
	scanf("%c", &c);
	printf("Enter your first number: ");
	scanf("%d", &x);
	printf("Enter your second number: ");
	scanf("%d", &y);
	switch(c) {
		case '+':
      printf("The sum is %d", x+y);
	    break;
	  case '-':
      printf("The difference is %d", x-y);
      break;
	  case '*':
	    printf("The product is %d", x*y);
      break;
    case '/':
      printf("The quotient is %d", x/y);
      break;
    default:
    	printf("Choose a proper operator");
	}
	return 0;
}
