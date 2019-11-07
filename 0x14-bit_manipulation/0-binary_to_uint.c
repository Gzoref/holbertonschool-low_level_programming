#include "holberton.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 *
 * @b: Pointer to string of chars
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int index = 0;
	unsigned long int number = 0, number1, decimal_value = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[index])
	{
		if (b[index] != '1' && b[index] != '0')
		{
			return (0);
		}
		index++;
	}

	index = 0;

	number = _atoi(b);

	while (number != 0)
	{
		number1 = number % 10;
		decimal_value += number1 << index;
		number /=  10;
		index++;
	}
	return (decimal_value);
}


/**
 * _atoi - Converts Ascii to integer
 *
 * @str: Pointer to string of chars
 *
 * Return: Converted number
 */

unsigned int _atoi(const char *str)
{
	unsigned long int index = 0, result = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		result = result * 10 + str[index] - '0';
	}
	return (result);
}
