//Write a program to calculate the factorial of a number
#include <stdio.h>
int main()
{
	int i,n,f;
	printf("Enter a natural number:");
	scanf("%d",&n);
	f = 1;
	for(i=1;i<=n;i++)
	{
		f *= i;
	}
	printf("Factorial of a number:%d",f);
	return 0;	
}
