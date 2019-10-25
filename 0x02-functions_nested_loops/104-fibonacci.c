#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int fiba, fiba1, fiba2, fib_b, fib_b1, fib_b2, fib_c,
		fib_c1, fib_c2, fib_d, fib_e, div;


	fiba = 1;
	fib_b = 2;
	div = 1000000000;
	fib_c = fiba + fib_b;

	printf("%lu, ", fiba);
	printf("%lu, ", fib_b);

	for (fib_d = 3; fib_d < 89; fib_d++)
	{
		printf("%lu, ", fib_c);
		fiba = fib_b;
		fib_b = fib_c;
		fib_c = fiba + fib_b;
	}
	fib_b1 = fib_b / div;
	fib_b2 = fib_b % div;
	fib_c1 = fib_c / div;
	fib_c2 = fib_c % div;
	for (fib_e = 89; fib_e < 98; fib_e++)
	{
		printf("%lu%lu, ", fib_c1, fib_c2);
		fiba1 = fib_b1;
		fiba2 = fib_b2;
		fib_b1 = fib_c1;
		fib_b2 = fib_c2;
		fib_c1 = fiba1 + fib_b1 + ((fiba2 + fib_b2) / div);
		fib_c2 = (fiba2 + fib_b2) % div;
	}
	printf("%lu%lu\n", fib_c1, fib_c2);
	return (0);
}
