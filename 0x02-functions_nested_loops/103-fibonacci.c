#include "stdio.h"

/**
 * main - Sum of the even-valued terms of fib
 *
 *
 * Return: 0
 */

int main(void)
{
	long int fib1, fib2, fib3, sum;

	fib1 = 0;
	fib2 = 0;
	fib3 = 1;
	sum = 0;

	while (fib2 < 4000000)
	{
		fib2 = fib1 + fib3;
		fib1 = fib3;
		fib3 = fib2;

		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

	}
	printf("%ld\n", sum);

	return (0);
}
