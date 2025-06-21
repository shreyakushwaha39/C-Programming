//write a program to display name of week days using switch case
#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number %d",n);
	scanf("%d",&n);
	
	switch (n)
	{
		case 1 :printf("Monday");
		break;
		
		case 2 :printf("Tuesday");
		break;
		
		case 3 :printf("Wednesday");
		break;
		
		case 4 :printf("Thursday");
		break;
		
		case 5 :printf("Friday");
		break;
		
		case 6 :printf("Satday");
		break;
		
		case 7 :printf("Sunday");
		break;
		
		default:
			printf("Invalid program");
		
		}
		return 0;
}
