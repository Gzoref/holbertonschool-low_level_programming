#include "holberton.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int count;
	for (count = 0; needle[count] && haystack[count]; count++)

		for (; needle[count] != haystack[count]; haystack++)
			count = 0;
		if(needle[count])

			return (0);

		else
			return (char *)haystack;


}
