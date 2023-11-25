#include <stdio.h>

/**
 * main - Program to print the sum of individual rows & columns
 * Return : 0
 */

int main()
{
	int a[3][3], i, j, sumR, sumC;

	printf("Enter elements of matrix : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Matrix is : \n");
        for (i = 0; i < 3; i++)
        {
                for (j = 0; j <3; j++)
                {
                        printf("%d\t", a[i][j]);
                }
        	printf("\n");
	}

	printf("Sum of Individual rows & columns are : \n");
        for (i = 0; i < 3; i++)
        {
		sumR = 0, sumC = 0;
                for (j = 0; j <3; j++)
                {
                        sumR = sumR + a[i][j];
			sumC = sumC + a[j][i];
                }
                printf("\n sumR = %d sumC = %d", sumR, sumC);
        }
	printf("\n");
}
