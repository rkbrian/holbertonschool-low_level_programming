#include "holberton.h"

/**
 * puts_half - pointer to print 2nd half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	j--;
	if (j % 2 == 0)
	{
		i = j / 2 + 1;
	}
	else
	{
		i = (j - 1) / 2 + 1;
	}
	while (i <= j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
