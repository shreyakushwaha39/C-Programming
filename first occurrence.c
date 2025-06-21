//Program to find the first occurrence of a character
#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="Locate the first 't' ";
	char * pos = strchr(s,'t');
	if(pos)
	{
		printf("Found 't' at position:%ld\n",pos-s);
	}
	else
	{
		printf("Character not found");
	}
	return 0;
}
