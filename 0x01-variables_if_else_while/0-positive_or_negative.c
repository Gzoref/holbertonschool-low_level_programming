#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("0 is zero");
	}
	return (0);
}
