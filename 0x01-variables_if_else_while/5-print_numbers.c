#include <stdio.h>

/**
 *main - base 10 digit numbers using putchar only
 *Return: value 0
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);

	}
	putchar('\n');

	return (0);
}
