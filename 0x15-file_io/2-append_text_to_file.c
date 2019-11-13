#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Const char pointer
 *
 * @text_content: Char pointer
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, length = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_WRONLY | O_APPEND);

	if (fdopen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fdwrite = write(fdopen, text_content, length);

	if (fdwrite == -1)
		return (-1);

	close(fdopen);

	return (1);
}
