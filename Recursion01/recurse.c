#include <stdio.h>
int main(void);

/**
 * main - function that prints the interger from 0 to nb
 * Return - void
 */

int print(int nb)
{
	if (nb < 0)
	{	
		return(0);
	}
	printf("%d", nb + print(nb - 1));
	nb--;
	return(nb);
}

int main(void)
{
	print(4);
	return(0);
}
