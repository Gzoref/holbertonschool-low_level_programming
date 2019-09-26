#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: int type
 *
 *  Return: n times table
 */

void print_times_table(int n)
{
	int row, col;

	if (n < 15 || n < 0)

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == 0)
				_putchar(((row * col) % 10) + '0');
			else if ((row * col) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((row * col) + '0');
			}
			else if ((row * col) <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((row * col) / 10) + '0');
				_putchar(((row * col) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((row * col) / 100) + '0');
				_putchar((((row * col) / 10) % 10) + '0');
				_putchar(((row * col) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
