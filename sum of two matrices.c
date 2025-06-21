//Write a program to add two matrices
#include <stdio.h>
int main()
{
	int rows,cols;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	printf("Enter number of columns:");
	scanf("%d",&cols);
	
	int arr1[rows][cols],arr2[rows][cols],sum[rows][cols];
	printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++)
        {
        	printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
		}
    }
        
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
        {
        	printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);	
		}
    }
        
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
	    }
	}  
	printf("Sum of the two matrices:\n");
	for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
        {
        	printf("%d\t",sum[i][j]);
		}
	}
}
