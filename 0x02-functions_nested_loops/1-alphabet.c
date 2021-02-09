#include "holberton.h"

/**
 *main - alphabet using putchar only
 *Return: value 0
 */

int main(void)
{
	char lttr;

	for (lttr = 'a' ; lttr <= 'z' ; lttr++)
	{
		putchar(lttr);

	}
	putchar('\n');

	return (0);
}
