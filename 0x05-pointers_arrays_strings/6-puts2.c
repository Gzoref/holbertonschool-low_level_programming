#include "holberton.h"

/**
 * puts2 -  prints a string
 *
 * @str: arg *str
 *
 * Return: string to stdout
 */

void puts2(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str += 2;
	}
	_putchar('\n');
}
