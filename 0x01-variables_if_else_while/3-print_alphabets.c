#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
