#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
