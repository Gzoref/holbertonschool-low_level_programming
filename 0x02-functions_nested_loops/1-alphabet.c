#include "holberton.h"

/**
 * print_alphabet - prints 10 times the alphabet
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
