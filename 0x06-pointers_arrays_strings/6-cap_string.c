#include <stdio.h>
#include <string.h>

/**
 * cap_string - function to cap each word
 * @p: output string
 * Return: p
 */

char *cap_string(char *p)
{
	int i, j;

	for (i = 0, j = 1 ; p[j] != '\0' ; i++, j++)
	{
		if ((p[j] >= 97 && p[j] <= 122) && (p[i] < 97 || p[i] > 122) && (p[i] < 65 || p[i] > 90))
		{
			p[j] = p[j] - 32;
		}
	}
	return (p);
}
