#include <stdio.h>
int sum(int,int);
int main()
{
	int num1,num2,s;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	s = sum(num1,num2);
	printf("sum = %d",s);
	return 0;
}
	int sum(int x,int y)
	{
		int z;
		z = x + y;
		return z;
	}
