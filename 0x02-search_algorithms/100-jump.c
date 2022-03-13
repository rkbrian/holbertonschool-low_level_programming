#include "search_algos.h"

/**
 * jump_search - search for a value in a sorted array of integers
 *  using the Jump search algorithm
 * @array: pointer to the first element of the sorted array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = sqrt(size);
	double rsize = sqrt(size);

	if (!array || !size)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	while (array[two_val_min(j, size - 1)] < value)
	{
		if (j >= size)
			break;
		i = j, printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		j += rsize;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]), i++;
		if (i == size)
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}

/**
 * two_val_min - compare 2 integers and return the smallest one
 * @x: number to be compeared with
 * @y: number to be compeared with
 * Return: the smallest integer
 */
size_t two_val_min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}
