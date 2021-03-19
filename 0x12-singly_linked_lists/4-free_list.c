#include <stdlib.h>
#include "lists.h"

/**
 * free_list - fuction to free malloc of struct
 * @head: struct and first node
 */

void free_list(list_t *head)
{
	list_t *tmpnode;

	while (head != NULL)
	{
		tmpnode = head->next;
		free(head->str);
		free(head);
		head = tmpnode;
	}
}
