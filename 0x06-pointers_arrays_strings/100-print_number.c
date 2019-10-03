#include "holberton.h"
/**
 * print_number -Prints an integer
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{


	int len, rem, ones, place;

	ones = n % 10;
	n /= 10;
	len = 1;
	place = n;

	if(ones < 0)
	{
		ones *= -1;
		place *= -1;
		n *= -1;
		_putchar('-');
	}
	else
	{
		while(place / 10 != 0)

			place /= 10;
		        len *= 10;

		while(len > 0)
		{
			rem = n / len;
			_putchar(rem + '0');
			n -= rem * len;
			len /= 10;
		}
	}
	_putchar(ones + '0');
}
