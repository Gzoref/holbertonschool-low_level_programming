#include "search_algos.h"
#include <math.h>

int min_value(int num1, int num2);

/**
 * jump_search - Searches value in array of ints using the Jump search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int jump_search(int *array, size_t size, int value)
{
	/* Define jump number by square root of size */
	int jump = sqrt(size);
	int index = 0;

	/* Check inputs */
	if (!array)
	{
		return (-1);
	}

	/* Find block of array where value is found in jump_step */
	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += jump;
	}

	/* Set jumpsize to index at beginning of array block to search*/
	index -= jump;

	printf("Value found between indexes [%d] and [%d]\n", index, index + jump);

	/* Value found in block of size jump_step. Linearly find value */
	while (index <= (index + jump) && index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		/* Found return value at index */
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
