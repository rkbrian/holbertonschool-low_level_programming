#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - fuction to free malloc of struct
 * @head: struct and first node to be set to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpnode;

	tmpnode = malloc(sizeof(listint_t));
	if (tmpnode == NULL)
	{
		free(tmpnode);
	}
	while (*head != NULL)
	{
		tmpnode->next = *head;
		free(*head);
		*head = tmpnode;
	}
	free(*head);
	free(tmpnode);
}
