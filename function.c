#include<stdio.h>

int max(int x, int y)
	{
		if (x > y)
			return x;
		else 
			return y;
	}

int main()
{
	int a = 10; 
	int b = 20;

	int m = max(a, b);

	printf("m is %d \n", m);
	return 0;
}