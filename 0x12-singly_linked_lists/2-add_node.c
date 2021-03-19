#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function to add new node in the beginning
 * @head: first node
 * @str: string - (malloc'ed string)
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;
	size_t count;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		return (NULL);
	}
	newhead->str = strdup(str);
	if (newhead->str == NULL)
	{
		free(newhead);
		return (NULL);
	}
	for (count = 0; newhead->str[count] != '\0'; count++)
	{
	}
	newhead->len = count;
	newhead->next = *head; /* node linking */
	*head = newhead;
	return (newhead);
}
