#include <stdio.h>
int main()
{
	int n,i,j,temp;
	printf("No of elements in array:");
	scanf("%d",&n);
	int arr[n];
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
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(arr[i]>arr[j+1])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			printf("\nTrue");
		}
		else
		{
			break;
		}
	}
	return 0;
}
