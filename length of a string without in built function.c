//program to calculate the length of a string without using in-built function
#include <stdio.h>
int main()
{
	char s;
	int i;
	static int count =0;
	printf("Enter a string");
	scanf("%c",&s);
	for(i=0;i=='\0';i++)
	{
		count += 1;
	}
	printf("Length of a string:%d",count);
	return 0;
}

