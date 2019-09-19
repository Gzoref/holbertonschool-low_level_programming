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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n  < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero", n, n % 10);
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
	else
		printf("Last digit of %d is %d and is 0", n, n % 10);
	return (0);
}
