#include <stdio.h>

/**
 *main - certain 2-digit form with comma and space, using putchar only
 *Return: value 0
 */

int main(void)
{
	int i, j;

	for (i = '0' ; i <= '8' ; i++)
	{
		for (j = '1' ; j <= '9' ; j++)
		{
			if (i == j || i > j)
				continue;
			else
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				continue;
			else if (i == j)
				continue;
			else
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
