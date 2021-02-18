#include "holberton.h"

/**
 * _strcmp - function to compare 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: difference of 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
