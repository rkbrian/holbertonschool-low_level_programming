#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns sum of all data n
 * @head: first node
 * Return: sum of all data n
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	unsigned int i, j = 0;

	if (tmp == NULL)
	{
		return (0);
	}
	for (i = 0; tmp != NULL; i++)
	{
		j = j + tmp->n;
		tmp = tmp->next;
	}
	return (j);
}
