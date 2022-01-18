#include <stdio.h>
int main()
{
	float celcius, fahrenheit;

	printf("Enter value in celcius: \n");
	scanf("%f", &celcius);

	fahrenheit = (celcius * 1.8) + 32;
	printf("\nTemperatue in fahrenheit = %f ", fahrenheit);
	return 0;
}