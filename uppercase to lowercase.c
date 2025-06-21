//Write a program to convert an uppercase letter to a lowercase letter and vice versa.
#include <stdio.h>
int main()
{
	char c;
	printf("Enter a character:%c",c);
	scanf("%c",&c);
	if (c >= 'A' && c <= 'Z')
	{
		c +=32;
		printf("%c",c);
	}
	else if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		printf("%c",c);
	}
	else{
		printf("Invalid choice");
	}
	return 0;
}
