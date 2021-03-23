#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fuction to free malloc of struct
 * @head: struct and first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmpnode;

	while (head != NULL)
	{
		tmpnode = head->next;
		free(head);
		head = tmpnode;
	}
}
