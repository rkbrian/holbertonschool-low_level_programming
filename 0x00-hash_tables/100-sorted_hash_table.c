#include "hash_tables.h"

/**
 * shash_table_create - function to create an ordered hash table
 * @size: hash table size in integer
 * Return: the ordered hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *haha = NULL;

	haha = malloc(sizeof(shash_table_t));
	if (haha == NULL)
		return (NULL);
	haha->size = size;
	haha->array = malloc(sizeof(shash_node_t *) * size);
	if (haha->array == NULL)
		return (NULL);
	haha->shead = NULL, haha->stail = NULL;
	return (haha);
}

/**
 * shash_table_set - function that adds an element to the ordered hash table
 * @ht: the ordered hash table to be added or updated the key/value to
 * @key: the key, can not be null
 * @value: the value associated with the key, could be null, must be duplicatd,
 *  the key/value pair will be inserted in the sorted list at the right place,
 *  keys sorted in ASCII value
 * Return: 1 if succeeded, 0 for failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *haha_snow = NULL, *tmp = NULL;

	if (key == NULL || ht == NULL)
		return (0);
	i = key_index((const unsigned char *)(key), ht->size);
	haha_snow = malloc(sizeof(shash_node_t));
	if (haha_snow == NULL)
		return (0);
	haha_snow->key = strdup(key), haha_snow->value = strdup(value);
	haha_snow->next = NULL;
	if (ht->array[i] == NULL)
		ht->array[i] = haha_snow;
	else if (strcmp(ht->array[i]->key, key) == 0)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = strdup(value);
		free(haha_snow->key);
		free(haha_snow->value);
		free(haha_snow);
		return (1);
	}
	else
		tmp = ht->array[i], haha_snow->next = tmp, ht->array[i] = haha_snow;
	insertion_list(ht, haha_snow);
	return (1);
}

/**
 * insertion_list - function to insert a hash node in sorted order
 * @ht: the ordered hash table to be added or updated
 * @haha: the new node
 */
void insertion_list(shash_table_t *ht, shash_node_t *haha)
{
	shash_node_t *current = NULL;

	if (ht->shead == NULL) /* no head no tail */
		haha->sprev = NULL, haha->snext = NULL, ht->shead = haha, ht->stail = haha;
	else if (strcmp(ht->shead->key, ht->stail->key) == 0
		 && strcmp(ht->shead->value, ht->stail->value) == 0) /* 1 element */
	{
		if (_strcmp(haha->key, ht->stail->key) >= 0)
			ht->stail = haha;
		else
			ht->shead = haha;
		ht->shead->snext = ht->stail, ht->stail->sprev = ht->shead;
	}
	else
	{
		current = ht->shead;
		if (_strcmp(haha->key, current->key) >= 0)
		{
			while (current && _strcmp(haha->key, current->key) >= 0)
				current = current->snext;
		}
		if (!current)
			ht->stail->snext = haha, haha->sprev = ht->stail, ht->stail = haha;
		else if (current == ht->shead)
			ht->shead->sprev = haha, haha->snext = ht->shead, ht->shead = haha;
		else
		{
			current->sprev->snext = haha, haha->sprev = current->sprev;
			current->sprev = haha, haha->snext = current;
		}
	}
}

/**
 * _strcmp - function to compare 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: difference of 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; (s1[i] != '\0' && s2[i] != '\0') ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (strlen(s1) == strlen(s2))
		return (0);
	else if (s1[i] == '\0')
		return (s2[i] * (-1));
	return (s1[i]);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key, can not be null
 * Return: the value associated with the key, or null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *hashbrown = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);
	i = key_index((const unsigned char *)(key), ht->size);
	hashbrown = ht->array[i];
	while (hashbrown && strcmp(hashbrown->key, key) != 0)
		hashbrown = hashbrown->next;
	if (hashbrown == NULL || hashbrown->value == NULL)
		return (NULL);
	return (hashbrown->value);
}

/**
 * shash_table_print - function that prints a hash table in order
 * @ht: the hash table to be looked into
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bash_table = NULL;
	int non_linked_comma_flag = 0;

	if (ht && (ht->size > 0))
	{
		printf("{");
		bash_table = ht->shead;
		while (bash_table)
		{
			if (non_linked_comma_flag > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", bash_table->key, bash_table->value);
			bash_table = bash_table->snext;
			non_linked_comma_flag = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - function that prints a hash table in revsd order
 * @ht: the hash table to be looked into
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bash_table = NULL;
	int non_linked_comma_flag = 0;

	if (ht && (ht->size > 0))
	{
		printf("{");
		bash_table = ht->stail;
		while (bash_table)
		{
			if (non_linked_comma_flag > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", bash_table->key, bash_table->value);
			bash_table = bash_table->sprev;
			non_linked_comma_flag = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - function that deletes an ordered hash table
 * @ht: the hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *smash_table = NULL, *trash_table = NULL;
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
