#include <stdio.h>
#include "lists.h"

/**
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	int strlen;

	while (h != NULL)
	{
		for (strlen = 0; h[strlen] != '\0'; strlen++)
		{
		}
		printf("[%d] %s\n", strlen, h);
		h = h->next;
		i++;
	}
	return (i);
}
