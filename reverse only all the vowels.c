//Given a string s reverse only all the vowels in the string and return it
#include <stdio.h>
#include <string.h>
int is_vowel(char c)
{
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}
//Function to reverse only the vowels in a string
int reverse_vowels(char *s)
{
	int left =0;
	int right=strlen(s)-1;
	while(left<right)
	{
		//Find the next vowel from the left
		while(left<right && !is_vowel(s[left]))
		{
			left++;
		}
		//Find the next vowel from the right
		while(left<right && !is_vowel(s[right]))
		{
			right--;
		}
		//Swap the vowels
		if(left<right)
		{
			char temp=s[left];
			s[left]=s[right];
			s[right]=temp;
			left++;
			right--;
		}
	}
}

int main()
{
	char s[]="Icecream";
	printf("Original string:%s\n",s);
	reverse_vowels(s);
	printf("String after reversing vowels:%s\n",s);
	return 0;
	
}
