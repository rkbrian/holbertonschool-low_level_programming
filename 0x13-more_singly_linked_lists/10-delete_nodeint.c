#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node
 * @head: first node
 * @index: index of the node to be deleted
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (0);
	}
	for (i = 0; i < index || tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (i < index)
	{
		return (-1);
	}
	tmp->next = tmp->next->next;
	for (; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	tmp = NULL;
	return (1);
}
