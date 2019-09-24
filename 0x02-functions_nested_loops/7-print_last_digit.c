#include "holberton.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: argument to be check
 *
 * Return: absolute value of n
 */
int print_last_digit(int n)
{
	int absVal;

	absVal = n % 10;

	if (absVal < 0)
	{
		absVal = absVal * -1;
	}
	_putchar(absVal + '0');
	return (absVal);
}
