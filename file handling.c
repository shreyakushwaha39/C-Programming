//File handling in C
#include <stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("abc.txt","w");
	fprintf(fp,"This is brilliant class");
	fclose(fp);
}


