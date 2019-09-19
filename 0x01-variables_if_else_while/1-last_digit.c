#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - n is greater positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastDigit);
	}

	return (0);
}
