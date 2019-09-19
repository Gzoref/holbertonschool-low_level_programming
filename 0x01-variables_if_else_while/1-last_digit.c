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

	if(n < 0)
	{
		lastDigit = n * -1 % 10;
	}
	else
	{
		lastDigit = n % 10;
	}
      
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}

	return (0);
}
