#include <holberton.h>

/**
 * cap_string - function to cap each word
 * @p: output string
 * Return: p
 */

char *cap_string(char *p)
{
	int i, j, k;
	char q[] = {' ', '\n', 11, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0, j = 1 ; p[i] != '\0' ; i++, j++)
	{
		for (k = 0 ; k <=12 ; k++)
		{
			if ((p[i] == q[k]) && (p[j] >= 97 && p[j] <= 122))
			{
				p[j] = p[j] - 32;
			}
		}
	}
	return (p);
}
