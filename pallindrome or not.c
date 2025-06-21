//program to check wheteher a string is pallindrome or not
#include <stdio.h>
int main()
{
	char s[50],rev[50];
	printf("Enter a string:");
	gets(s);
	int i,j,k;
	for(i=0;s[i]!='\0';i++);
	for(i=i-1,j=0;i>=0;i--,j++)
	{
		rev[j] = s[i];
	}
	rev[j]='\0';
	puts(rev);
	
	for(k=0;rev[k]!='\0';k++)
	{
		if(rev[k] == 's[i]')
	{
		printf("string is a Pallindrome ");
	}
	else
	{
		printf("string is not a pallindrome");
	}	
	}
	return 0;
}
