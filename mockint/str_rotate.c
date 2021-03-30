#include <stdio.h>

/**
 *
 */
int str_rotate(char *s)
{
	char *p;
	int i, j;

	if (s == NULL)
	{
		return NULL;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
	{
		free(p);
		return (-1);
	}
	p[0] = s[i - 1];
	for (j = 1; j < i - 1; j++)
	{
		p[j] = s[j - 1];
	}
	p[j] = '\0';
	return (p);
}
