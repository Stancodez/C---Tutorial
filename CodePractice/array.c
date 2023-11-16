#include <stdio.h>

/**
 * main - an array to read the marks of 5 students,
 * 		and calculate their sum and average.
 * Return : 0
 */

int main()
{
	int marks[5], i; 
	float sum = 0, avg;
	
	for (i = 0; i < 5; i++)
	{
		printf("Enter the marks of students: ");
		scanf("%d", &marks[i]);
	}
	for (i = 0; i < 5; i++)
	{	
		sum = sum + marks[i];
	}
	avg = sum / 5;
	printf("Sum = %f", sum);
	printf("\n average = %f", avg);
}
