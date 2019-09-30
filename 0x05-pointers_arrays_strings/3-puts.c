#include "holberton.h"

/**
 * _puts -  prints a string
 *
 * @str: arg s
 *
 * Return: string to stdout
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
