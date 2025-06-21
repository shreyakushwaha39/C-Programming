//Write a program to store the students details using structure
#include <stdio.h>
struct Students
{
	int r_no,marks;
	char name[50];
	char subj;
};

int main()
{
	struct Students S;
	int r_no,marks;
	char name,subj;
	printf("Enter students details:\n");
	printf("Enter name :%s\n",name);
	scanf("%s",&S.name);
	printf("Enter r_no :%d\n",r_no);
	scanf("%d",&S.r_no);
	printf("Enter subj :%s\n",subj);
	scanf("%s",&S.subj);
	printf("Enter marks:%d",marks);
	scanf("%d",&S.marks);
}
