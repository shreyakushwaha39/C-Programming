//program to concatenate two strings with library function
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[50],s2[50];
	printf("Enter a string1:\n");
	gets(s1);
	printf("Enter a string2:\n");
	gets(s2);
	strcat(s1,s2);
	printf("Concatenated strings:%s",s1);
	return 0;
}
