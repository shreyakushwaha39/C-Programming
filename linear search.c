//linear search (find the element present in an array)
#include <stdio.h>
int main()
{
	int n,N,i;
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
    
    printf("\nEnter a number:");
    scanf("%d,&N");
    if (N==arr[i])
    {
    	printf("Element is present in array");
	}
	else{
		printf("Element is not present in an array");
	}
	return 0;
	}
