#include "holberton.h"

/**
 * rev_string - function to reverse a given string
 * @s: string pointer
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char p;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; j <= i ; j++, i--)
	{
		p = s[i];
		s[i] = s[j];
		s[j] = p;
	}
}
