#include "holberton.h"

/**
 * puts2 - pointer to print every other char in a string
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
