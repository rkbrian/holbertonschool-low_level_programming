#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - fuction to free malloc of struct
 * @head: struct and first node to be set to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmpnode = *head;

	while (tmpnode != NULL)
	{
		tmpnode = tmpnode->next;
		free(*head);
		*head = tmpnode;
	}
	*head = NULL;
	free(*head);
}
