#include <stdio.h>
// int rec (int);
int rec ();
int main()
{
	int a, fact;
	printf("Enter any number: \n");
	scanf("%d", &a);
	fact = rec (a);
	printf("Factorial value = %d\n", fact);
	return 0;
}

int rec (int x)
{
	int f;
	if(x == 1)
		return (1);
	else
		f=x* rec(x-1);
	return(f);
}