#include <stdio.h>

/**
 *main - base 16 numbers using putchar only
 *Return: value 0
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);

	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);

	}
	putchar('\n');

	return (0);
}
