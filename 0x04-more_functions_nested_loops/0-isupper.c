#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: characters to be tested
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
