#include "holberton.h"


int word_count(char *str, int n, char firstChar)
{
	int wordCount, flag, i, charCount;

	str[0] != ' ' ? wordCount = 1 : wordCount = 0;

	for (i = 0, flag = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i +1] != '\0' && flag == 0)
		{
			wordCount++;
			flag = 1;
		}

		if (n > 0 && n == wordCount)
		{
			if (n > 0 && n == wordCount && firstChar > 0)
			{
				return (i);
			}
			for (charCount = 0; str[i + charCount + 1] != ' '; i++)
			{
				;
			}
			return (charCount);
		}
		if (str[i] == ' ')
		{
			flag = 0;
		}
		return (wordCount);
	}
}



/**
 * **strow - set memory function
 *
 * @str: pointer to array
 *
 * Return: s
 */

char **strtow(char *str)
{
	char **strArr;
	int wordLen, firstChar,length, wordCount, i, j;

	if (str == NULL || str == "")
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; ++i)
	{
		
	}

}
