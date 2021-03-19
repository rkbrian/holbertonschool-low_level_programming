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
	list_t *newend;
	size_t count;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	newend = malloc(sizeof(list_t));
	if (newend == NULL)
	{
		return (NULL);
	}
	newend->str = strdup(str);
	if (newend->str == NULL)
	{
		free(newend);
		return (NULL);
	}
	for (count = 0; newend->str[count] != '\0'; count++)
	{
	}
	newend->len = count;
	newend->next = NULL;
	(*head == NULL)
	{
		*head = newend;
	}
	return (newend);
}
