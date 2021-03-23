#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function to add new node in the beginning
 * @head: first node
 * @n: number - (malloc'ed string)
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *newhead;
	size_t count;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
	{
		return (NULL);
	}
	if (newhead->n == NULL)
	{
		free(newhead);
		return (NULL);
	}
	for (count = 0; newhead->str[count] != '\0'; count++)
	{
	}
	newhead->next = *head; /* node linking */
	*head = newhead;
	return (newhead);
}
