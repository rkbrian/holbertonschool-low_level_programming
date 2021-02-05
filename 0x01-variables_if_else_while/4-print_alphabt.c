#include <stdio.h>

/**
 *main - alphabet using putchar only and no q or e
 *Return: value 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'd' ; ch++)
		for (ch = 'f' ; ch <= 'p' ; ch++)
			for (ch = 'r'; ch <= 'z' ; ch++)
	{
		putchar(ch);

	}
	putchar('\n');

	return (0);
}
