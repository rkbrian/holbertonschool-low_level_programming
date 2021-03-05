#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function to create array of int
 * @min: min value included
 * @max: max value included
 * Return: array or null
 */

int *array_range(int min, int max)
{
	int num, i, *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	for (num = min, i = 0; num <= max; i++, num++)
	{
		arr[i] = num;
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
