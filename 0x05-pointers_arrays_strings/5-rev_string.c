#include "holberton.h"

/**
 * rev_string - function to reverse a given string
 * @s: reversed string
 */

void rev_string(char *s)
{
	int i = 0;
	char var, *p;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		var = s[i];
		p = &var;
		i--;
	}
	_putchar(*p);
	_putchar('\n');
}
