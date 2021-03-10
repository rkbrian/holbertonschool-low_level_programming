#include "function_pointers.h"

/**
 * array_iterator - function to exe a function
 * @array: array
 * @size: unsigned int type, size of array
 * @action: ptr to the func needed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size && array[i] != '\0'; i++)
		{
			action(array[i]);
		}
	}
}
