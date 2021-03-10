#include "function_pointers.h"

/**
 * int_index - function to search for an int
 * @array: array
 * @size: size of array
 * @cmp: ptr to the func for comparing values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array != NULL || size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		NULL;
	}
}
