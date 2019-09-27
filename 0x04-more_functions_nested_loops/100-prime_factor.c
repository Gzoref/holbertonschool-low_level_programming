#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i;
	long int prime;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			prime = i;
			n /= prime;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
