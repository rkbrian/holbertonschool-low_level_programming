#include "lists.h"
#include <stdlib.h>

/**
 * free_list - fuction to free malloc of struct
 * @head: struct and first node
 */

void free_list(list_t *head)
{
	list_t *newend;

	while (head != NULL)
	{
		newend = head->next;
		free(*head->str);
		free(*head->next);
		free(*head);
		head = newend;
	}
}
