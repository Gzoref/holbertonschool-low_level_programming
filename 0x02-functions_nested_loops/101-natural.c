#include <stdio.h>

/**
 * main - Program to sum integers
 *
 * Description: check for all natural numbers in range of
 * 3 and 5 and sum them
 * Return: 0
 */

int main(void)
{

	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
