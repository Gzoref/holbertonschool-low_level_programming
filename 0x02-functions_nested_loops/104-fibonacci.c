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
	unsigned long int carry, fib1Left, fib1Right, fib2Right, fib2Left,
		left, right;

	fib1Left = 0;
	fib2Right = 2;
	fib1Right = 0;
	fib2Left = 0;
	left = 0;
	right = 0;


	printf("%lu, %lu", fib1Left, fib2Right);

	for (counter = 2; counter < 98; counter++)
	{
		carry = (fib1Right + fib2Right) / 100000000000;
		left = fib1Left + fib2Left + carry;
		 right = (fib1Right + fib2Right) % 100000000000;
		fib1Left = fib2Left;
		fib2Left = left;
		fib1Right = fib2Right;
		fib2Right = right;

		if (left > 0)
		{
			printf("%lu", left);

			if (counter == 97)
			{
				printf("%lu\n", right);
			}
			else
			{
				printf("%lu\n", right);
			}

		}
	}
	return (0);
}
