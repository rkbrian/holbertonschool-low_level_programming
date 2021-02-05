#include <stdio.h>

/**
 *main - alphabet using putchar only
 *Return: value 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);

	}
	putchar('\n');

	return (0);
}
