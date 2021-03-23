#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print linked list content and node count
 * @h: input struct, linked list
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		printf("(nil)");
	}
	for (i = 1; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (i);
}
