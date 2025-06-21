#include <stdio.h>
void swap(int * ,int *);  //Pointer variable
int main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("Actual Parameters:%d,%d",a,b);
} 
void swap(int *x,int *y)
{
	int t;
	t =*x;
	*x = *y;
	*y =t;
	printf("Formal Parameter : %d ,%d\n",*x,*y);
}
