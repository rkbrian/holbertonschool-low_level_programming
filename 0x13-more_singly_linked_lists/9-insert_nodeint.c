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
	listint_t *tmp, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	tmp = *head;
	while (i < idx - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		++i;
	}
	if (i < idx - 1)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
	for (; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (NULL);
}
