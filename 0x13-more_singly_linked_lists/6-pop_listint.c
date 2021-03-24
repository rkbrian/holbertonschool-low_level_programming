#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: first node
 * Return: head node data n or 0 for empty linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead, *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
	}
	tmp->n = head[1];
	tmp->next = *head;
	newhead = tmp->next;
	return (newhead->n);
}
