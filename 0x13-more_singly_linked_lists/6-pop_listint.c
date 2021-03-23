#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: first node
 * Return: head node data n or 0 for empty linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead;

	newhead = head->next;
	newhead->n = n;
	if (*head == NULL)
	{
		return (0);
	}
	return (n);
}
