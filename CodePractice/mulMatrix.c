#include <stdio.h>
#define N 50

/**
 * main - Program to print the multiplication of 2 matrices
 * Return : 0
 */

int main()
{
	int a[N][N], b[N][N], c[N][N], i, j, k;
	int sum, m, n, p, q;

	printf("Enter row and column of matrix 1 : \n");
	scanf("%d %d", &m, &n);
	printf("Enter elements of matrix 1 : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter row and column of matrix 2 : \n");
        scanf("%d %d", &p, &q);
        printf("Enter elements of matrix 2 : \n");
        for (i = 0; i < p; i++)
        {
                for (j = 0; j < q; j++)
                {
                        scanf("%d", &b[i][j]);
                }
        }

	printf("Matrix 1 is : \n");
        for (i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                {
                        printf("%d\t", a[i][j]);
                }
		printf("\n");
        }

	printf("Matrix 2 is : \n");
        for (i = 0; i < p; i++)
        {
                for (j = 0; j < q; j++)
                {
                        printf("%d\t", b[i][j]);
                }
                printf("\n");
        }

	if  (n != p)
	{
		printf("Cannot Multiply");
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				sum = 0;
				for (k = 0; k < m; k++)
				{
					sum = sum + (a[i][k] * b[k][j]);
				}
				c[i][j] = sum;
			}
		}

		printf("The multiplication is : \n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
}
