#include <stdio.h>

/**
 *main - certain 3-digit form with comma and space, using putchar only
 *Return: value 0
 */

int main(void)
{
	int i, j, k;

	for (i = '0' ; i <= '7' ; i++)
	{
		for (j = '1' ; j <= '8' ; j++)
		{
			for (k = '2' ; k <= '9' ; k++)
			{
				if (!(i < j && j < k))
					continue;
				else
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7' && j == '8' && k == '9')
					continue;
				else
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
