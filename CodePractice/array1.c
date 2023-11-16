#include <stdio.h>

/**
 * main - an array to count the total
 * 	number of even and odd elements
 * Return: 0
 */

int main()
{
	int a[10], i;
	int even = 0;
	int odd =0;

	printf("Enter array elements: ");
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);

		if(a[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("Total even numbers are = %d", even);
	printf("\n Total odd numbers are = %d", odd);
}
