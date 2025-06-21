#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
int i,j,k,rows1,cols1,rows2,cols2,sum;
printf("Enter number of rows:");
scanf("%d",&rows1);
printf("Enter number of columns:");
scanf("%d",&cols);
    
    if(cols1!=rows2)
    {
    	printf("Multiplication is not possible");
	}
    else
    {
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
    
	int mul[rows][cols];
	for (int i = 0; i < rows1; i++) 
	{
        for (int j = 0; j < cols2; j++)
        for(int k=0;k<cols1;k++)
		sum = sum+arr1[i][k]*arr2[k][j];
		sum = mul[i][j];
	}
	printf("Multiplication is:\n");
	for (int i = 0; i < rows1; i++) 
	{
        for (int j = 0; j < cols1; j++)
        printf("%d\t",mul[i][j]);
    }
        
}
    
