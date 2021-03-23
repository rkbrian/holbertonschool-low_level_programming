#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print linked list content and node count
 * @h: input struct, linked list
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *newh;

	newh = h;
	while (newh != NULL)
	{
		printf("%d\n", newh->n);
		newh = newh->next;
		i++;
	}
	return (i);
}
