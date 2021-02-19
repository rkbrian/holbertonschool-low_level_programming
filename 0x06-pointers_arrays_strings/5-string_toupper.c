#include <stdio.h>
#include <string.h>

/**
 * string_toupper - alphabet using putchar only and no q or e
 * @: output string
 * Return: p
 */

char *string_toupper(char *)
{
	int i = 0, j;
	char l[30], u[30], *p = *;

	for (l[i] = 'a', u[i] = 'A' ; l[i] <= 'z' ; i++)
	{
	}
	for (j = 0 ; j <= i ; j++)
	{
		if ( *p == l[j])
		{
			*p = u[j];
		}
	}
	return (p);
}
