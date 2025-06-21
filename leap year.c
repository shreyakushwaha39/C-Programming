//check whether a given year is leap year or not
#include <stdio.h>
int main()
{
	int year;
	printf("Enter year: %d",year);
	scanf("%d",&year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d year is a leap year",year);	
	}
	else
	{
		printf("%d year is not a leap year",year);
	}
	return 0;
}

