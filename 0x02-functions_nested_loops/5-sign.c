#include "holberton.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * @n: number to be check
 *
 * Return: Return symbols if n is greater than or less than
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
