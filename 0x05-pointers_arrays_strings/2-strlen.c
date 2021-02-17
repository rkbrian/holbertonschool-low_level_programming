#include "holberton.h"

/**
 * _strlen - pointer to find string length
 * @s: string input
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0');
	{
		i++;
	}
	return (i);
}
