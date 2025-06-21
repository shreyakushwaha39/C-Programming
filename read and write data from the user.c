//Write a program to read the data from the keyboard write it to a file called input,
//again read the same data from input file and display it on the screen
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char c;
	//Open file for writing
	fp = fopen("input.txt","w");
	if(fp == NULL)
	{
		perror("Error opening file for writing");
		exit(1);
	}
	printf("Enter the data(press Ctrl+Z) to ");
	//Read input from the user and input a file
	while((c*getchar())!=EOF )
	{
		putc(c,fp);
	}
	fclose(fp);
	//Open file for reading
	fp = fopen("input.txt","r");
	if(fp == NULL)
	{
		perror("Error opening file for reading");
		exit(1);
	}
	return 0;
}
