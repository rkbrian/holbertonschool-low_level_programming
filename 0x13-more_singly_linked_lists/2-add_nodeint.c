#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function to add new node in the beginning
 * @head: first node
 * @n: number - (malloc'ed string)
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	if (head == NULL)
	{
		return (NULL);
	}
	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
	{
		free(newhead);
		return (NULL);
	}
	newhead->n = n;
	newhead->next = *head; /* node linking */
	*head = newhead;
	return (newhead);
}
