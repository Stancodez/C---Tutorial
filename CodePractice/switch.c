#include <stdio.h>

/**
 * main - a function using switch to make simple calculation
 * Return - result
 */

int main()
{
	char operator;
	int a, b, result;

	printf("Enter an operator: ");
	scanf("%c", &operator);

	printf("Enter two operand: ");
	scanf("%d %d", &a, &b);

	switch (operator)
	{
		case '+':
			result = a + b;
			printf("sum = %d", result);
			break;

		case '-':
			result = a - b;
			printf("sub = %d", result);
			break;

		case '*':
			result = a * b;
			printf("mul = %d", result);
			break;

		case '/':
			result = a / b;
			printf("div = %d", result);
			break;

		default:
			printf("Enter valid operator");
	}
	return(0);
}			
