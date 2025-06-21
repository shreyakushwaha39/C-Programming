//write a program to create sum of elements of a 1-D array
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("No of elements in array:");
	scanf("%d",&n);
	int arr[n];//Declaration
	printf("Enter the elements\n",n);
	for (i=0;i<n;i++)
	{
		printf("Elements:%d\n",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
		
	}
	printf("The elements of array are:\n");
	printf("\nSum of elements:%d",sum);
	return 0;
}
