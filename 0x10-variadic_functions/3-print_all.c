#include "variadic_functions.h"

/**
 *  print_all - Prints anything
 *
 *  @format: List of args passed to function
 *
 *  Return: void
 */

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, commaCheck = 0;
	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		if (commaCheck)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			commaCheck = 0;
			i++;
			continue;
		}
		commaCheck = 1,	i++;
	}
	putchar('\n');
	va_end(ap);
}
