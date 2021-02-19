#include <stdio.h>
#include <string.h>

/**
 * string_toupper - function to replace lower case letter w upper case
 * @: output string
 * Return: p
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0 ; p[i] != '\0' ; i++)
	{
		if (*p >= 97 && *p <= 122)
		{
			*p = *p - 32;
		}
	}
	return (p);
}
