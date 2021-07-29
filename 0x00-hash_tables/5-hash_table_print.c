#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table to be looked into
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *bash_table = NULL;
	unsigned long int i;
	int non_linked_comma_flag = 0;

	if (ht && (ht->size > 0))
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				if (non_linked_comma_flag > 0)
					printf(", ");
				bash_table = ht->array[i];
				while (bash_table)
				{
					printf("\'%s\': \'%s\'", bash_table->key, bash_table->value);
					if (bash_table->next != NULL)
						printf(", ");
					bash_table = bash_table->next;
					non_linked_comma_flag = 1;
				}
			}
		}
		printf("}\n");
	}
}
