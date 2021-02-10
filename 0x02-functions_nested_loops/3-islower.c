#include "holberton.h"

/**
 * _islower - returns 1 for int c lowercase check
 * @c: character for the check
 * Return: value 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
