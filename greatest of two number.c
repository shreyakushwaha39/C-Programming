//greatest of two number
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers %d and %d",a,b);
	scanf("%d %d", &a,&b);
	if (a>b)
	{
		printf("%d is greatest",a);
	}
	else
	{
		printf("%d is greatest",b);
	}
	
	return 0;
	
}
