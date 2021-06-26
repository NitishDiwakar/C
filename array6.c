#include <stdio.h>
int main()
{
	char hello[] = "Hello, Nitish Kumar Diwakar!";

	int x = 0;

	while(hello[x])
	{
		putchar(hello[x]);
		x++;
	}
	
	printf("\n");

}