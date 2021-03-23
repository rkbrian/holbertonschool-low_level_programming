#include "lists.h"

/**
 * listint_len - function to print number of element in linked list
 * @h: input struct, linked list
 * Return: number of element in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
