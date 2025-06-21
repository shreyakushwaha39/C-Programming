//Program to swap two numbers using 3rd variable.
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of two numbers:");
	scanf("%d %d", &a,&b);
	printf("Before swapping the value of a  = %d and b = %d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("After swapping a = %d aand b = %d",a,b);
	return 0;
	
}
