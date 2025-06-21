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
		int x,y,z;
		printf("Enter two numbers:");
		scanf("%d %d",&x,&y);
		z = x + y;
		return z;
	}
