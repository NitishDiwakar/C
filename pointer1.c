#include <stdio.h>
int main()
{
	int a = 10;
	int *p;
	p = &a;

	printf("Address stored in a variable p is: %x\n", p); // accessing the address
	printf("Value stored in a variable p is: %d\n", *p); // accessing the value

	return 0;
}