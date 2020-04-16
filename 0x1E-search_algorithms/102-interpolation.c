#include "search_algos.h"

/**
 * interpolation_search - Search value in array with Interpolation search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @val: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int interpolation_search(int *array, size_t size, int val)
{
	int lo = 0;
	int hi = (size - 1);
	int position;


	while (array != NULL)
	{

		/* Probe position formula */
		position = lo + (((double)(hi - lo) /
			     (array[hi] - array[lo])) * (val - array[lo]));

		if (position < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", position, array[position]);
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", position);
			return (-1);
		}
		/* Found value at position */
		if (array[position] == val)
		{
			return (position);
		}
		/* Value in upper area */
		if (array[position] < val)
		{
			lo = position + 1;
		}

		else
		{
			hi = position - 1;
		}
	}
	return (-1);
}
