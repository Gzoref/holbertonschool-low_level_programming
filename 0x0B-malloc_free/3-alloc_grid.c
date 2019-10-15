#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 *
 * @width: int arg
 *
 * @height: int arg
 *
 * Return: grid of 0s
 */

int **alloc_grid(int width, int height)
{
	int col, row;
	int **doublePtr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	doublePtr = malloc(height * sizeof(int *));

	if (doublePtr == NULL)
	{
		return (NULL);
	}

	for (col = 0; col < height; col++)
	{
		doublePtr[col] = malloc(width * sizeof(int));

		if (doublePtr[col] == NULL)
		{
			for (row = 0; row < col; row++)
				free(doublePtr[row]);

			free(doublePtr);
			return (NULL);
		}

		for (row = 0; row < width; row++)
		{
			doublePtr[col][row] = 0;
		}
	}
		return (doublePtr);
}
