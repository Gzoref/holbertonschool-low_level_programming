#include "stdio.h"

/**
 * main - Sum of the even-valued terms of fib
 *
 * Description: fibobnachi starting from one to 40000000
 *
 * Return: 0
 */

int main(void)
{
	long int fib1, fib2, fib3, sum;

	fib1 = 1;
	fib2 = 2;
	sum = 0;

	while (fib2 < 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}
		fib3 = fib2;
		fib2 = fib1 + fib2;
		fib1 = fib3;
	}
	printf("%ld\n", sum);

	return (0);
}
