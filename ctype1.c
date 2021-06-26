#include <stdio.h>
#include <ctype.h>

int main()
{
	char a = 'c';
	printf("Small %c\n", tolower(a) );
	printf("Capital %c\n", toupper(a) );
	printf("What begins with %c\n?", a);
}