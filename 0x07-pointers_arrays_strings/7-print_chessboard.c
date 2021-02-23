#include "holberton.h"

/**
 * print_chessboard - function to print checker board
 * @a: source 2d array
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
