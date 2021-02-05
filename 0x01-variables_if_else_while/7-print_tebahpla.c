#include <stdio.h>

/**
 *main - reverse alphabet using putchar only
 *Return: value 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);

	}
	putchar('\n');

	return (0);
}
