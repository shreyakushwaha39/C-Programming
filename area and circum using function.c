//Write a program to calaculate the area of a circle and circumference of a circle using function
#include <stdio.h>
int area(float r);
int circum(float r);
int main()
{
	float r;
	printf("Enter the value of radius:");
	scanf("%f",&r);
	area(r);
	circum(r);
	return 0;
}
int area(float r)
{
	float area;
	area = 3.14*r*r;
	printf("The area of a circle:%f\n",area);
}
int circum(float r)
{
	float circum;
	circum = 2*3.14*r;
	printf("The circumferenceof a circle:%f",circum);
}
