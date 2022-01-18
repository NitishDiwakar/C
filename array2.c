#include <stdio.h>

int main()
{
	
	float temps[4] = {89.4, 84.3, 93.8, 88.7};

	printf("Local temperatures: \n");

	int x;
	for(x=0; x<4; x++)
		printf("Station %d: %.1f \n", x+1, temps[x]);

	return(0);
}