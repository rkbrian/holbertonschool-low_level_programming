#include "holberton.h"

/**
 * set_string - set a pointer value to a char
 * @s: double pointer
 * @to: char
 */

void set_string(char **s, char *to)
{
	int i;

	s[1] = to;
	for (i = 0; s[1][i] != '\0'; i++)
	_putchar (s[l][i]);
}
