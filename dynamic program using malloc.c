//Write a program to create a dynamic program using malloc function
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("enter the size of array:");
	scanf("%d",&n);
	ptr = (int*)malloc(n*sizeof(int));//malloc returns pointer (ptr)
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements:%d -",i+1);
		scanf("%d",ptr+i);
	}
	printf("Elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",ptr[i]);
	}	
}
