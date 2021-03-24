// Addition of two integer
#include <stdio.h>
int main()
{
	int first_number, second_number, addition;

	// Get two numbers from user
	printf("Please enter first number\n");
	scanf("%d",&first_number);

	printf("Please enter second number\n");
	scanf("%d",&second_number);

	addition = first_number + second_number;

	printf("Addition of %d and %d is: %d \n", first_number, second_number, addition);

	return 0;
}