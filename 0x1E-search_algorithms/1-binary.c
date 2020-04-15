#include "search_algos.h"
int recursive_binary_search(int *array, int left, int right, int value);
void print_search(int *array, int first, int last);


/**
 * binary_search - Searches value in array of ints using the Binary search algo
 *
 * @array: Array to search
 *
 * @size: Size of the array
 *
 * @value: Value to search
 *
 * Return: First index where value is located or -1 for NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	/* Check inputs and call recursive search return value */
	if (array && size)
	{
		return (recursive_binary_search(array, 0, (int)size - 1, value));
	}
	/* Otherwise return -1 */
	return (-1);
}


/**
 * recursive_binary_search - Recursively breaks array into subarrays & searches
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

int recursive_binary_search(int *array, int left, int right, int value)
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
			return (recursive_binary_search(array, left, middle - 1, value));
		}

		/* Otherwise search for value in right subarray */
		return (recursive_binary_search(array, middle + 1, right, value));
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
