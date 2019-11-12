#include "holberton.h"

/**
 * create_file - Creates a new file
 *
 * @filename: Param description
 *
 * @text_content: Param description
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t length = 0, bytes;

	while (text_content[length] != '\0')
	{
		length++;
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	bytes = write(fp, text_content, length);

	if (bytes == -1)
	{
		return (-1);
	}
	close(fp);

	return (1);
}
