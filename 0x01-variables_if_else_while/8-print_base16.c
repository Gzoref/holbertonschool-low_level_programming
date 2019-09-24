#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all the numbers of base 16.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
