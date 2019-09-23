#include "holberton.h"

/**  * a function that checks for lowercase character
  *
  * Return: On success 1.
*/

int _islower(int c)
{

	if(c >= 'a' && c <= 'z')
	{
		return 1;
	}
	return 0;
}
