#include <stdio.h>

/**
 *main - base 10 digit numbers using putchar only
 *Return: value 0
 */

int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);

	}
	putchar('\n');

	return (0);
}
