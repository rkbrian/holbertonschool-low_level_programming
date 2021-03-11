#include "function_pointers.h"

/**
 * int_index - function to search for an int
 * @array: array
 * @size: size of array
 * @cmp: ptr to the func for comparing values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
		while (i < size)
		{
			i++;
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
