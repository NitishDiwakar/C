#include <stdio.h>
int main()
{
	int avg, sum = 0;
	int i;
	int marks[30]; // Array declaration

	for(i=0; i <= 29; i++)
	{
		printf("\nEnter marks ");
		scanf("%d", &marks[i]); // Store data in array
	}

	for(i=0; i<=29; i++)
		sum = sum + marks[i];

	avg = sum / 30;
	printf("\nAverage marks = %d", avg);
}