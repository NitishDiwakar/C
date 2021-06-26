#include <stdio.h>

int main()
{
	int a = 0;
	for(a=2; a<=20; a = a+2)
	{
		// printf("%2d\n", a); // align single digit to right
		printf("%.2d\n", a); // add zero before single digit
	}
}