//write a program to check a number is pallindrome or not.
#include <stdio.h>
int main()
{
	int n,d,s = 0,temp;
	printf("Enter any number:");
	scanf("%d",&n);
	temp = n;
	while (n>0)
	{
		d = n% 10;
		s = s*10 +d;
		n = n/10;
	}
	if (temp==s)
	{
		printf("No is pallindrome\n");
	}
	else
	{
		printf("No is not pallindrome");
	}
	printf("s = %d",s);
	
	return 0;
}
