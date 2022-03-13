#include "search_algos.h"

/**
 * linear_skip - search for a value in a sorted skip list of integers.
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: a pointer on the first node where value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *low_bound = NULL, *high_bound = NULL;

	if (!list)
		return (NULL);
	high_bound = list;
	while (high_bound)
	{
		low_bound = high_bound, high_bound = high_bound->express;
		if (high_bound)
		{
			printf("Value checked array[%ld] = [%d]\n", high_bound->index, high_bound->n);
			if (high_bound->n > value)
				break;
		}
	}
	if (!high_bound)
	{
		high_bound = low_bound;
		while (high_bound->next)
			high_bound = high_bound->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low_bound->index, high_bound->index);
	while (low_bound && low_bound != high_bound->next)
	{
		printf("Value checked array[%ld] = [%d]\n", low_bound->index, low_bound->n);
		if (low_bound->n == value)
			return (low_bound);
		low_bound = low_bound->next;
	}
	return (NULL);
}
