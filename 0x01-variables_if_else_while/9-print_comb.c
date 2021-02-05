#include <stdio.h>

/**
 *main - base 10 digit numbers with comma using putchar only
 *Return: value 0
 */

int main(void)
{
	char d;

	for (d = '0' ; d <= '8' ; d++)
	{
		putchar(d);
		putchar(",");

	}
	putchar(9);
	putchar("\n");

	return (0);
}
