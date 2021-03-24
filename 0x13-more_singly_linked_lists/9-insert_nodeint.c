#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node
 * @head: first node
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: int content of new node
 * Return: address of new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	unsigned int i;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (i = 0; i < idx && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (i < idx)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	return (tmp);
	*head = tmp;
	for (; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (NULL);
}
