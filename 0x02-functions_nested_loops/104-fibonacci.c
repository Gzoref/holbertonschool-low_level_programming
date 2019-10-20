#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int counter;
	unsigned long int fib1, fib1a, fib1b, fib2, fib2a, fib2b,
		fib3, fib3a, fib3b;

	fib1 = 0;
	fib2 = 1;

	for (counter = 0; counter < 91; counter++)
	{
		fib3 = fib1  + fib2;
		fib1 = fib2;
		fib2 = fib3;
		printf("%lu, ", fib3);
	}
		fib1a = fib1 / 100000000000;
		fib1b = fib1 % 100000000000;
		fib2a = fib2 / 100000000000;
		fib2b = fib2 % 100000000000;

		for (; counter < 98; counter++)
		{
			fib3a = fib1a + fib2a;
			fib3b = fib1b + fib2b;

		if (fib3b > 10000000000)
		{
			fib3b %= 10000000000;
			fib3a++;
		}
		if (counter != 97)
		{
			printf("%ld%ld, ", fib3a, fib3b);
			fib1a = fib2a;
			fib1b = fib2b;
			fib2a = fib3a;
			fib2b = fib3b;
		}
		else
			printf("%lu%lu\n", fib3a, fib3b);
		}
		return (0);
}
