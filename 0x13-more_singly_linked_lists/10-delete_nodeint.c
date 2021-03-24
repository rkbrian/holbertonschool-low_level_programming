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
	listint_t *tmp, *newtmp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 0; i < index && newtmp != NULL; i++)
	{
		newtmp = tmp;
		tmp = tmp->next;
	}
	if (i < index)
	{
		return (-1);
	}
	newtmp->next = tmp->next;
	free(tmp);
	return (1);
}
