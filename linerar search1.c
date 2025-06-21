//linear search (find the element present in an array)
#include <stdio.h>
int main()
{
	int n,key,i;
	printf("Enter the limit:");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("Elements:%d\n",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("Enter the number to  be searched:");
	scanf("%d",&key);
    for(i=0;i<n;i++)
    {
	    if (key==arr[i])
	    {
	    	printf("Index is :%d",i);
    		break;	
		}
	}
		if(i==n)
		{
			printf("Element is not found in an array");
		}
	return 0;
}
