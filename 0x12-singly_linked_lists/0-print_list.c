#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print linked list content and node count
 * @h: input struct, linked list
 * Return: node count
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	int strlen;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		for (strlen = 0; h->str[strlen] != '\0'; strlen++)
		{
		}
		printf("[%d] %s\n", strlen, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
