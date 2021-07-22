#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * @size: hash table size in integer
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **current;

	while (*current != NULL)
	{
		*current->key = malloc(sizeof(char) * size);
		*current->value = malloc(sizeof(char) * size);
		*current = *current->next;
	}
	return (current);
}
