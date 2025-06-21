//Print a pattern4
#include <stdio.h>
int main()
{
	char i,j,k;
	for(i = 'G';i>='A';i--)
	{
		for(j = 'A';j<=i;j++)
		{
			printf("%c",j);
		}
		for(k ='G';k>i;k--)
		{
			printf(" ");
		}
	printf("\n");
	}
	return 0;
}
