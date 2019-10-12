#include "holberton.h"

/**
 * *_memset - Fills memory with a constant byte
 *
 * @s: pointer
 * @b: char
 * @n: unsigned int
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n -= 1;
	}
	return (s);
}
