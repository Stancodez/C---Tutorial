#include <stdio.h>

/**
 * main - function to print table of a number
 * Return: 0
 */

int main()
{
	int number, i, a;

	printf("Enter a number: ");
	scanf("%d", &number);
	for (i = 1; i <= 10; i++)
	{
		a = number * i;
		printf("%d\n", a);
	}
	return(0);
}
