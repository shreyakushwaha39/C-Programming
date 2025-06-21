//Write a program to find the factorial of a number using function
#include <stdio.h>
int num(int n);
int main()
{
	int n,i,f = 1;
	num(n);
	for (i=1;i<=n;i++)
	{
		f *= i;
	}
	printf("Factorial of a number is = %d",f);
	return f;
}
int num(int n)
{
	printf("Enter a natural number:");
	scanf("%d",&n);
	return 0;
}
