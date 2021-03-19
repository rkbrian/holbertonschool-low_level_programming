#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function to add new node at the end
 * @head: first node
 * @str: string - (malloc'ed string)
 * Return: the address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend, *tmp;

	if (str == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newend = malloc(sizeof(list_t));
		if (newend == NULL)
			return (NULL);
		newend->str = strdup(str);
		if (newend->str == NULL)
		{
			free(newend);
			return (NULL);
		}
		newend->len = _count(newend->str);
		newend->next = NULL;
		*head = newend;
		return (newend);
	}
	newend = malloc(sizeof(list_t));
	if (newend == NULL)
		return (NULL);
	newend->str = strdup(str);
	if (newend->str == NULL)
	{
		free(newend);
		return (NULL);
	}
	newend->len = _count(newend->str);
	newend->next = NULL;
	tmp = *head; /* switching start */
	while (tmp->next != NULL)
	{
		tmp = tmp->next; /* direction changed */
	}
	tmp->next = newend; /* ending of switch */
	return (newend);
}

/**
 * _count - string length
 * @s: string input
 * Return: string length
 */
size_t _count(char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
