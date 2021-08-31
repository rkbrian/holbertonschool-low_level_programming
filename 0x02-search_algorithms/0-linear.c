#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	int i, j;

	j = size;
	for (i = 0; i < j; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
