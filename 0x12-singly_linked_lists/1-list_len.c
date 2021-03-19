#include "lists.h"

/**
 * list_len - function to print number of element in linked list
 * @h: input struct, linked list
 * Return: number of element in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
