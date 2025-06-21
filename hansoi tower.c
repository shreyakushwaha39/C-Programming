#include <stdio.h>
void ToH(int n,char source,char destination,char auxillary);
int main
{
	int n;
	printf("Enter number of disks: ");
	scanf("%d",&n);
	
	ToH(n,'A','C','B');
	
	return 0;
}
void ToH(int n,char source,char destination,char auxillary)
{
	if (n ==1)
	{
		printf("Move Disk 1 from %c to %c\n",source,destination);
		return ;
	}
	ToH(n-1,source,auxillary,destination);
	printf("Move Disk %d from %c to %c\n",n,source,destination);
	ToH(n-1,auxillary,destination,source);
}
