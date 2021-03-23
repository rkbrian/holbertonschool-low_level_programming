#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add new node at the end
 * @head: first node
 * @n: integer
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend, *tmp;

	if (*head == NULL)
	{
		newend = malloc(sizeof(listint_t));
		if (newend == NULL)
		{
			free(newend);
			return (NULL);
		}
		newend->n = n;
		newend->next = NULL;
		*head = newend;
		return (newend);
	}
	newend = malloc(sizeof(listint_t));
	if (newend == NULL)
	{
		free(newend);
		return (NULL);
	}
	newend->n = n;
	newend->next = NULL;
	tmp = *head; /* switching start */
	while (tmp->next != NULL)
	{
		tmp = tmp->next; /* direction changed */
	}
	tmp->next = newend; /* ending of switch */
	return (newend);
}
