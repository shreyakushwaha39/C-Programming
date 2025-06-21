//Write a program to print a fibonacci series
#include <stdio.h>
int main()
{
	int i,n,nt;
	int t1 = 0, t2 =1;
	printf("Enter number of terms:");
	scanf("%d",&n);
	printf("Fibonacci series:%d,%d",t1,t2);
	for (i=2;i<=n;i++)
	{
		t1 = t2;
		t2 = nt;
		nt = t1+t2;
		printf("%d,",nt);
	}
	return 0;
}
