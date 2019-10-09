#include "holberton.h"
#include <stddef.h>

/**
 * strlen_rec - String length
 *
 * @str: char
 *
 * Return: the integer length
 */

int strlen_rec(char *str)
{
	if (*str)
	{
		str++;

		return (1 + strlen_rec(str));
	}
	return (0);
}

/**
 * helper_pal - Returns Palindrone
 *
 * @str: char
 *
 * @length: int
 *
 * @count: int
 *
 * Return: the integer length
 */

int helper_pal(char *str, int length, int count)
{
	if (count >= length)
	{
		return (1);
	}
	if (str[length] == str[count])
	{
		return (helper_pal(str, length - 1, count + 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: char
 *
 * Return: the integer length
 */

int is_palindrome(char *s)
{
	int length = strlen_rec(s);
	int count = 0;

	return (helper_pal(s, length - 1, count));
}
