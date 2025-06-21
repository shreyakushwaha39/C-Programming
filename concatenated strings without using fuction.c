//program to cancatenate two strings without using library function
#include <stdio.h>
#include <string.h>
int main()
{
	int length,len;
	char s1[200],s2[100];
	printf("Enter first string1");
	fgets(s1,sizeof(s1),stdin);
	
	//Remove new line character if present in string1
	length = strlen(s1);
	if(len>0 && s1[len-1]=='\n')
	{
		s1[len-1]='\0';
	}
	
	printf("Enter second string2");
	fgets(s2,sizeof(s2),stdin);
	
	//Remove new line character if present in string2
	length = strlen(s2);
	if(len>0 && s2[len-1]=='\n')
	{
		s2[len-1]='\0';
	}
	
	//Find the end of s1
	int i=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	
	//Append s2 to s1
	int j=0;
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	
	//Null-terminate the concatenated string
	s1[i] = '\0';
	
	
	
	printf("Conatenated string:%s",s1);
	return 0;
}

