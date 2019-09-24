#include "holberton.h"

/**
 * jack_bauer - Write a function that prints the sign of a number.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	hour = 0;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar(hour / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');

			minute++;
		}
		hour++;
	}
}
