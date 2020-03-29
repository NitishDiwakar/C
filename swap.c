#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	printf("\nBefore swap: a = %d, b = %d\n", a, b);
	a = a + b; 
	b = a - b; 
	a = a - b;

	printf("\nAFter swap: a = %d, b = %d\n ", a, b);
}