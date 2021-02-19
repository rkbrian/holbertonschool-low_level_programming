#include <stdio.h>
#include <string.h>

/**
 * cap_string - function to cap each word
 * @p: output string
 * Return: p
 */

char *cap_string(char *p)
{
	int i;

	for (i = 0 ; p[i] != '\0' ; i++)
	{
		if ((p[i] >= 97 && p[i] <= 122) && (p[i - 1] < 97 || p[i - 1] > 122))
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
