//program to copy a string to another string without using library function
#include <stdio.h>
int main()
{
	char s[50],c[50];
	int i;
	printf("Enter a string:");
	scanf("%c",&s);
	for(i=0;s[i]!='\0';i++)
	{
		c[i] = s[i];
	}
	c[i]='\0';
	printf("Copied string:",c[i]);
	puts(c);
	return 0;
}
