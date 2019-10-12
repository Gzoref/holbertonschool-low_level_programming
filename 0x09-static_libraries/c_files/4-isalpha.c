#include "holberton.h"

/**
 * _isalpha - Checks if input character is alphacharacter
 * @c: arg to be checked
 *
 * Return: 1 for alpha, 0 for non-alpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
