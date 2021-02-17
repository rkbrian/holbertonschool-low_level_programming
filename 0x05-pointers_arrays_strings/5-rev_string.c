#include "holberton.h"

/**
 * rev_string - function to reverse a given string
 * @s: reversed string
 */

void rev_string(char *s)
{
	int i = 0;
	char var;
	char *p = *s;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{ 
		var = p[i];
		s = &var;
		i--;
	}
	_putchar(*s);
	_putchar('\n');
}
