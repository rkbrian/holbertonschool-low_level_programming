#include "lists.h"
#include <stdlib.h>

/**
 * free_list - fuction to free malloc of struct
 * @head: struct and first node
 */

void free_list(list_t *head)
{
list_t 
	while (*head != NULL)
	{
		free(*head->str);
		free(*head->len);
		free(*head->next);
	if (*head != NULL)
	{
		free(*head);
	}
}
