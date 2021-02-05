#include <stdio.h>

/**
 *main - base 10 digit numbers with comma and space, using putchar only
 *Return: value 0
 */

int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);
		if (d < '9')
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
