#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int letter, counter = 0;

	while (counter < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
		counter++;
		_putchar('\n');
	}
}
