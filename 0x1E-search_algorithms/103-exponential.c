#include "search_algos.h"
#include <math.h>

int r_binary_search(int *array, int left, int right, int value);
void print_search(int *array, int first, int last);
int min(int a, int b);

/**
 * exponential_search - Searches value in array with Exponential search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int exponential_search(int *array, size_t size, int value)
{
	int index = 1;

	if (array && size)
	{
		/* Find first location */
		if (array[0] == value)
		{
			return (0);
		}
		/* Get range for binary search by doubling index */
		while (index < (int)size && array[index] <= value)
		{
			printf("Value checked array[%d] = [%d]\n", index, array[index]);
			index *= 2;
		}
		return (r_binary_search(array, index / 2, min(index, (int)size - 1), value));
	}
	return (-1);
}


/**
 * r_binary_search - Recursively breaks array into subarrays & searches
 *
 * @array: Array to search
 *
 * @left: Search on left side of array
 *
 * @right: Search on right side of array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int r_binary_search(int *array, int left, int right, int value)
{

	int middle;


	/* If value is smaller then middle, look in first half of array */
	if (right >= left)
	{
		middle = left + (right - left) / 2;
		print_search(array, left, right);

		/* If search finds value in middle, return value */
		if (array[middle] == value)
		{
			return (middle);
		}

		/* If element is less than middle, search left subarray */
		if (array[middle] > value)
		{
			return (r_binary_search(array, left, middle - 1, value));
		}

		/* Otherwise search for value in right subarray */
		return (r_binary_search(array, middle + 1, right, value));
	}
	/* If element doesn't exist return -1 */
	return (-1);
}


/**
 * print_search - Prints arrayand side of array
 *
 * @array: Array to search
 *
 * @first: left hand side of array
 *
 * @last: right hand side of array
 *
 * Return: Void
 */

void print_search(int *array, int first, int last)
{
	int index = 0;

	printf("Searching in array: ");

	while (first <= last)
	{
		if (index > 0)
		{
			printf(", ");
		}
		index = first++;
		printf("%d", array[index++]);
	}
	printf("\n");
}


/**
 * min - min value
 *
 * @a: First number
 *
 * @b: Second number
 *
 * Return: Integer
 */

int min(int a, int b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}
