#include "holberton.h"

/**
 * _pow_recursion - Value of x raised to the power of y
 *
 * @x: int arg
 *
 * @y: int arg
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
