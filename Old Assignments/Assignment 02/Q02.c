// WAP to read an alphabet and convert it into Uppercase if it is lowercase and vice versa.
#include <stdio.h>

int main() {
	char a;
	printf("Write an Alphabet: ");
	scanf("%c", &a);
	(a<97) ? printf("The lower case is %c", a+32): printf("The upper case is %c", a-32);
	return 0;
}
