#include "hash_tables.h"

/**
 * hash_table_create - function to create hash table
 * @size: hash table size in integer
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *haha = NULL;
	unsigned long int i = 0;

	haha = malloc(sizeof(hash_table_t));
	if (haha == NULL)
		return (NULL);
	haha->size = size;
	haha->array = malloc(sizeof(hash_node_t) * size);
	if (haha->array == NULL)
		return (NULL);
	for (; i < size; i++)
		haha->array[i] = NULL; /* pointer to hash nodes, starting with null */
	return (haha);
}
