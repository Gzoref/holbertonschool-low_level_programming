#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int index;
	long int remainder1, remainder2, fib1, fib2, div1, div2, quot;

	fib1 = 0;
	fib2 = 1;
	div1 = 0;
	div2 = 0;
	remainder1 = 0;
	remainder2 = 2;

	printf("%ld, %ld, ", fib1, fib2);

	for (index = 2; index < 98; index++)
	{
		quot = (fib1 + fib2) / 100000000000;
		div1 = fib1 + fib2 + quot;
		fib1 = remainder1;
		remainder1 = div1;
		fib2 = remainder2;
		remainder2 = div2;
	}
	if (div1 > 0)
	{
		printf("%ld", div1);

		if (index == 97)
			printf("%ld\n", div2);
		else
			printf("ld, ", div2);
	}
	else
		printf("%ld, ", div2);

	return (0);
}
