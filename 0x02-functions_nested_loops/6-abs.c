#include "holberton.h"

/**
 * _abs - Write a function that prints the sign of a number.
 * @n: argument to be check
 *
 * Return: absolute value of n
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
