#include <stdio.h>
int swap(int a,int b);
int main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("\nValue of actual parameter: %d , %d",a,b);
	return 0;
}
int swap(int x,int y)
{
	int t;
	t = x;
	x =y;
	y = t;
	printf("\nValue of Formal Parameter = %d ,%d",x,y);
}
