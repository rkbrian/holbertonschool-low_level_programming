#include "holberton.h"

/**
 * _isalpha - returns 1 for letter check
 * @c: character for the check
 * Return: value 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
