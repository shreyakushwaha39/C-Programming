//Program to find the length of a string without using library function
#include <stdio.h>
int main()
{
	char s[50];
	int i;
	printf("Enter a string:");
	scanf("%c",&s);
	gets(s);
	printf("Length of a string:\n");
	for(i=1;s[i]!='\0';i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
