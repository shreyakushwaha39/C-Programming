#include <stdio.h>
int main()
{
	int a=3;
	int *ptr;
	ptr = &a;
	printf("a=3\n");
	printf("address of a = %p\n",&a);
	printf("Pointer ptr points to address = %p\n",ptr);//referencing
	printf("Value at address stored in ptr:%d\n",*ptr);//dereferencing
	return 0;
}
