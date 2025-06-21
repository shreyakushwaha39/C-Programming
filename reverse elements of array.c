
//write a program to create reverse the elements of a 1-D array
#include <stdio.h>
int main()
{
	int n,i,j,temp;
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
		printf("%d\n,",arr[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("Reverse array:");
	for (i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
