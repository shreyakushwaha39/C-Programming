#include <stdio.h>
int sum();
int main()
{
	int s;
	s = sum();
	printf("sum is = %d",s);
	return 0;
}
int sum()
{
	int x,y,s;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	s = x + y;
}

