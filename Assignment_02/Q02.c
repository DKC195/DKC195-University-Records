//WAP to read an alphabet and convert it into Uppercase if it is lowercase and vice versa.
#include <stdio.h>

int main() {
	char a;
	printf("Write an Alphabet:\n");
	scanf("%c",&a);
	if(a<97) {
    a=a+32;
    printf("The lower case is %c",a);
	}
	else {
    a=a-32;
    printf("The upper case is %c",a);
	}
	return 0;
}
