//Write a program to calculate the total and average marks of a student using a structure.
#include <stdio.h>
struct students
{
	char name[50];
	int marks1,marks2,marks3;
	int total,average;	
};

int main()
{
	struct students S;
	int marks1,marks2,marks3;
	int total,average;
	printf("Enter student name:");
	scanf("%s",&S.name);
	printf("Enter english marks:");
	scanf("%d",&S.marks1);
	printf("Enter maths marks:");
	scanf("%d",&S.marks2);
	printf("Enter computer marks:");
	scanf("%d",&S.marks3);
	total = S.marks1+S.marks2+S.marks3;
	average = total/3;
	printf("Total marks:%d",total);
	printf("Average marks:%d",average);
	return 0;
}
