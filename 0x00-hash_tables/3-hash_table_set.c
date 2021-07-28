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
	hash_node_t *haha_snow, *tmp;

	if (key == NULL)
		return (1);
	i = key_index(key, ht->size);
	if (strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = realloc(ht->array[i]->value, (sizeof(char) * (strlen(key) + 1)));
		strcpy(ht->array[i]->value, value);
	}
	else
	{
		if (ht->array[i] == NULL)
			ht->array[i] = haha_snow;
		else if (strcmp(ht->array[i]->key, key) != 0)
		{
			tmp = ht->array[i];
			haha_snow->next = tmp;
			ht->array[i] = haha_snow;
		}
		haha_snow->key = malloc(sizeof(char) * (strlen(key) + 1));
		if (haha_snow->key == NULL)
			return (1);
		strcpy(haha_snow->key, key);
		if (value == NULL)
			haha_snow->value = NULL;
		else
		{
			haha_snow->value = malloc(sizeof(char) * (strlen(value) + 1));
			if (haha_snow->value == NULL)
				return (1);
			strcpy(ht->array[i]->value, value);
		}
	}
	return (0);
}