#include <stdio.h>

/**
 *main - 2 double-digit form with comma and space, putchar only
 *Return: value 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			for (k = '0' ; k <= '9' ; k++)
			{
				for (l = '0' ; l <= '9' ; l++)
				{
					if ((i * 10) + j - (k * 10) - l >= 0)
						continue;
					else
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
						continue;
					else
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
