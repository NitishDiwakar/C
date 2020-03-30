#include<stdio.h>
int main()
{
	char Operator;
	float num1, num2, result = 0;

	printf("Please Enter an Operator (+, -, *, /) :  \n");
	scanf("%c", &Operator);

	printf("\n Please Enter the Values for two Operands: num 1 and num 2 :  " );
	scanf("%f%f", &num1, &num2);

	switch(Operator)
	{
		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 - num2;
			break;

		case '*':
			result = num1 * num2;
			break;

		case '/':
			result = num1 / num2;
			break;

		default:
			printf("\n You have entered an Invalid Operator ");
			break;
	}

	printf("\n The result of %.2f %c %.2f = %.2f \n", num1, Operator, num2, result);
	return 0;


}