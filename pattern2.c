//Print a pattern2
#include <stdio.h>
int main()
{
	int i,j;
	for(i = 1;i<=5;i++)
	{
		for(j = 1;j<=i;j++)
		{
			if(i % 2 !=0 && j & 2 == 0 || i%2==0 && j%2!=0)
			{
				printf("B");
			}
			else
			{
				printf("A");
			}
		printf("\n");
		}
		printf("\n");
	}
	return 0;
}
