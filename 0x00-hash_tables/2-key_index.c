#include "hash_tables.h"

/**
 * key_index - function to give index of key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
