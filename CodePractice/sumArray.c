#include <stdio.h>

/**
 * main - a program to read 2 arrays of size 5 and
 * 	store their sum into a 3rd array.
 * Return : 0
 */

int main()
{
	int a[5], b[5], c[5];
	int i;

	printf("Enter first array elements:");
	printf("\n");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);

	printf("Enter second array elements:");
        printf("\n");
	for (i = 0; i < 5; i++)
                scanf("%d", &b[i]);

	for (i = 0; i < 5; i++)
	{
		c[i] = a[i] + b[i];
		printf("Sum of array elements at index %d is = %d\n", i, c[i]);
	}
}
