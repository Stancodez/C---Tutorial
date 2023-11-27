#include <stdio.h>

/**
 * main - Program to print the sum of 2 matrices
 * Return : 0
 */

int main ()
{
	int a[2][3], b[2][3], c[2][3], i, j;

	printf("Enter matrix 1 elements : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter matrix 2 elements : \n");
        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        scanf("%d", &b[i][j]);
                }
        }

	printf("Matrix 1 is : \n");
        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        printf("%d\t", a[i][j]);
                }
		printf("\n");
        }

	printf("Matrix 2 is : \n");
        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        printf("%d\t", b[i][j]);
                }
                printf("\n");
        }

	printf("The sum of both matrices is : \n");
        for (i = 0; i < 2; i++)
        {
                for (j = 0; j < 3; j++)
                {
			c[i][j] = a[i][j] + b[i][j];
                        printf("%d\t", c[i][j]);
                }
                printf("\n");
        }
}
