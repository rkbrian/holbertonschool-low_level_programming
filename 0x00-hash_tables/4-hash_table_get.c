#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key, can not be null
 * Return: the value associated with the key, or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *hashbrown = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);
	i = key_index((const unsigned char *)(key), ht->size);
	hashbrown = ht->array[i];
	while (hashbrown && strcmp(hashbrown->key, key) != 0)
		hashbrown = hashbrown->next;
	if (hashbrown == NULL || hashbrown->value == NULL)
		return (NULL);
	else
		return (hashbrown->value);
}
