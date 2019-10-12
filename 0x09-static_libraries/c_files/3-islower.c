#include "holberton.h"

/**
  * _islower - a function that checks for lowercase character
  *
  * @c: is a letter, lowercase or uppercase
  *
  * Return: On 0 or 1
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
