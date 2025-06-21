//
#include <stdio.h>
int main()
{
	int n,i,key,low,high,mid;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Elements:%d\n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to  be searched:");
	scanf("%d",&key);
	low =0;
	high=n-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;   //Calculate mid index
		if(arr[mid]==key)
		{
			printf("Element found at index:%d\n",mid);
			break;
		}
		else if(arr[mid]<key)
		{
			low = mid +1;   //Search the right half
		}
		else
		{
			high = mid-1;   //Search the left half  
		}
	}
	return 0;
}
