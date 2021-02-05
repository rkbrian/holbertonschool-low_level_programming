#include <stdio.h>

/**
 *main - alphabet with both cases using putchar only
 *Return: value 0
 */

int main(void)
{
	char lttr1;
	char lttr2;

	for (lttr1 = 'a' ; lttr1 <= 'z' ; lttr1++)
	{
		putchar(lttr1);

	}

	for (lttr2 = 'A' ; lttr2 <= 'Z' ; lttr2++)
	{
		putchar(lttr2);
	}
	putchar('\n');

	return (0);
}
