#include <stdio.h>

/**
 *main - 2-digit numbers with comma and space, using putchar only
 *Return: value 0
 */

int main(void)
{
	int i, j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '9' && j == '9')
				continue;
			else
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
