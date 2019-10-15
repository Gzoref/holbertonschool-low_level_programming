#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to allocate memory to grid
 *
 * @grid: int pointer
 *
 * @height: int arg
 *
 * Return: grid of 0s
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
