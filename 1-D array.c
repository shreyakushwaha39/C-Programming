//write a program to create a 1-D array
#include <stdio.h>
int main()
{
	int n,i;
	printf("No of elements in array:");
	scanf("%d",&n);
	int arr[n];//Declaration
	printf("Enter the elements\n",n);
	for (i=0;i<n;i++)
	{
		printf("Elements:%d\n",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("The elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
