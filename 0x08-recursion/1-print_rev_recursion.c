#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string
 *
 * @s: char arg
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
