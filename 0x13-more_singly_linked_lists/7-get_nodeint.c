#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: first node
 * @index: the index of the node, starting at 0
 * Return: nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i;

	if (index == 0)
	{
		return (head);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	return (tmp);
}
