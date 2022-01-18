#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	do
	{
		ch =getchar();
		ch =toupper(ch);
		putchar(ch);
	}
	while
	(ch != '\n');
}