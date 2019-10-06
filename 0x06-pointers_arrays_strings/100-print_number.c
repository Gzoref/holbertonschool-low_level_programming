#include "holberton.h"
/**
 * print_number -Prints an integer
 *
 * @n: input integer
 *
 * Return: void
 */

void print_number(int n)
{

	int len, index;

	len = 1000000000;

	if (n < 0)
	{
		_putchar('-');

	if (n == -2147483648)
	{
		index = 1;
		n += 1;
	}
	n = -n;
	}
	while (len != 1)
	{
		if (n >= len)
			_putchar((n / len) % 10 + '0');
		len /= 10;
	}
	if (index == 1)
	{
		_putchar(((n % 10) + 1) + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
