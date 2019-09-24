#include "holberton.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0
 *
 * Return void
 */

void times_table(void)
{

	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{

			prod = col * row;

			_putchar(',');

			_putchar(' ');

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
