//Write a progarm to reverse a number
#include <stdio.h>
int main()
{
	int n,d,sum;
	printf("Enter a number:");
	scanf("%d",&n);
	sum = 0;
	while (n>0)
	{
		
		d = n%10;
		sum = sum*10 + d;
		n = n/10;
	}
	printf("Reverse a number:%d",sum);
	return 0;
}
