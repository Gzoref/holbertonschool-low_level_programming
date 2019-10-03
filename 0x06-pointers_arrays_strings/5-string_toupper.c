#include "holberton.h"

/**
 * string_toupper - change a string to upper case
 *
 * @str: pointer to a string
 *
 *  Return: s
 */


char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
