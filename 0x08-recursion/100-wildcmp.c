#include "holberton.h"

/**
 * wildcmp - Compares two strings
 *
 * @s1 : char
 *
 * @s2 : char
 *
 * Return: the integer length
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && (!(*s2)))  /*Base Case*/
	{
		return (1);
	}

	else if (*s1 == *s2)   /*When strings equal return 1. Add 1 to args*/
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')                  /* When equal with *, add 1*/
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		if (!(*s1))              /*Unequal, return 0*/
		{
			return (0);
		}

		if (wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}
