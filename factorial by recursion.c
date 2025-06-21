//Write a program to find the factorial of a number using recursion
#include <stdio.h>
int fun(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fun(n-1);
	}
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factorial is : %d",fun(n));
	return 0;
}
