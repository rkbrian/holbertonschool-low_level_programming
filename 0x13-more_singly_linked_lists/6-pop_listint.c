#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: first node
 * Return: head node data n or 0 for empty linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead = *head;

	if (*head == NULL)
	{
		return (0);
	}
	newhead = newhead->next;
	free(*head);
	*head = newhead;
	return (newhead->n);
}
