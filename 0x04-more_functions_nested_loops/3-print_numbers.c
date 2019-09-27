#include "holberton.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 *
 * Returnvoid
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
