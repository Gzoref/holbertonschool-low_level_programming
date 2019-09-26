#include "stdio.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int fib1  = 0;
	int fib2  = 1;
	int fib3;
	int count = 1;

	while (count <= 50)
	{
		fib3 =  fib2 + fib1;
		count++;
		printf("%d", fib3);

		if (count <= 50)
			printf(", ");
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");

	return (0);

}
