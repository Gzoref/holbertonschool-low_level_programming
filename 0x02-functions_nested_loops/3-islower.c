#include "holberton.h"

/**
  * _isLower - a function that checks for lowercase character
  *
  * Return: On 0 or 1.
*/

int _islower(int c)
{

	if(c >= 'a' && c <= 'z')
	{
		return 1;
	}
	return 0;
}
