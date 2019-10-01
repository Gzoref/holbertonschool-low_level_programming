#include "holberton.h"
/**
  * puts_half -  prints a string
  *
  * @str: arg *str
  *
  * Return: string to stdout
  */
void puts_half(char *str)
{
	 int length, n;

	 while (str[length] != '\0')
	 {
		 length++;
	 }

	 if (length % 2 != 0)
	 {
		 n = (length - 1) / 2;
		 while(length >= n)
		 {
			 _putchar(str[n]);
			 n++;
		 }
	 }
	 else
	 {
		 n = length / 2;
		 while(length >= n)
		 {
			 _putchar(str[n]);
			 n++;
		 }
	 }
	 _putchar('\n');
}
