#include <stdio.h>

/**
 * main - a program to print the transpose of a matrix
 * Return : 0
 */

int main()
{
	int a[2][3], i, j;

	printf("Enter element of a matrix: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	printf("Matrix is: \n");
	for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
		{	
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Transpose is: \n");
        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 2; j++)
        	{	
			printf("%d\t", a[j][i]);
		}
        	printf("\n");
	}
}
