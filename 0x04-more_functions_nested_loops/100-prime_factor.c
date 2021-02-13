#include <stdio.h>

/**
 *main - find the largest prime factor
 *Return: value 0
 */

int main(void)
{
	unsigned long int comp;
	unsigned long int pr, i;

	comp = 612852475143;
	for (pr = comp - 1 ; pr > 1 ; pr--)
	{
		if ((comp % pr) == 0)
		{
			for (i = 2 ; i < pr ; i++)
			{
				if (pr % i == 0)
				{
					break;
				}
			}
			if (i == pr)
			{
				printf("%lu\n", pr);
				break;
			}
		}
	}
	return (0);
}
