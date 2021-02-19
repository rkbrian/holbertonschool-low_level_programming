#include <stdio.h>
#include <string.h>

/**
 * leet - function to replace certain letters with num
 * @: output string or array
 * Return: p
 */

char *leet(char *p)
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
