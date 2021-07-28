#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to be added or updated the key/value to
 * @key: the key, can not be null
 * @value: the value associated with the key, could be null, bust be duplicated
 * Return: 1 if succeeded, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *haha_snow = NULL, *tmp = NULL;

	if (key == NULL || ht == NULL)
		return (0);
	i = key_index((const unsigned char *)(key), ht->size);
	haha_snow = malloc(sizeof(hash_node_t));
	if (haha_snow == NULL)
		return (0);
	haha_snow->key = strdup(key);
	if (value == NULL)
		haha_snow->value = NULL;
	else
		haha_snow->value = strdup(value);
	haha_snow->next = NULL;
	if (ht->array[i] == NULL || strcmp(ht->array[i]->key, key) == 0)
		ht->array[i] = haha_snow;
	else
	{
		tmp = ht->array[i];
		haha_snow->next = tmp;
		ht->array[i] = haha_snow;
	}
	return (1);
}
