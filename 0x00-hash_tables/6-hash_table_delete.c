#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *smash_table = NULL, *trash_table = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		smash_table = ht->array[i];
		while (smash_table)
		{
			free(smash_table->key);
			free(smash_table->value);
			trash_table = smash_table->next;
			free(smash_table);
			smash_table = trash_table;
		}
	}
	free(ht->array);
	free(ht);
}
