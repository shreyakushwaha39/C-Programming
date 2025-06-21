//sum of digits using while loop
#include <stdio.h>
int main()
{
	int n,d,sum,count;
	printf("Enter a number");
	scanf("%d",&n);
	count = 0;
	while (n>0)
	{
		n = n/10;
		count = count + 1;
	}
	printf("Counting of digits:%d",count);
	
	sum = 0;
	while (n>0)
	{
		d = n%10;
		sum = sum + d;
		n = n/10;
	}
	printf("Sum of digits:%d",sum);
	return 0;
}
