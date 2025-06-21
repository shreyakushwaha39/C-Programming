//Write a program to calculate fibonacci series using recursion
#include <stdio.h>
int fib(int x)
{
	if (x == 0)
	{
		return 0 ;
	}
	else if(x == 1)
	{
		return 1;
	}
	else
	{
		return (fib(x-1 + fib(x-2)));
	}
}
int main()
{
	int i,n;
	printf("Enter a number of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
}
