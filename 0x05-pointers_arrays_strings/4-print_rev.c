#include "holberton.h"

/**
 * print_rev -  prints a string in reverse
 *
 * @s: arg s
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (s[i] != '\0')
	{
	_putchar(s[i--]);
	}
	_putchar('\n');
}
