#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - function to create hash table
 * @size: hash table size in integer
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size);

#endif
