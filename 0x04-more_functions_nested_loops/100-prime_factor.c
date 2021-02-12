#include <stdio.h>

/**
 *main - find the largest prime factor
 *Return: value 0
 */

int main()
{
	int comp, pr, i;

	comp = 340;
	pr = comp - 1;
	while (pr >= 1)
	{
		pr--;
		if (comp % pr == 0)
		{
			i = pr - 1;
			while (i <= 2)
			{
				i--;
				if (pr % i > 0)
				{
					break;
				}
			}
		}
	}
	printf("%d\n", pr);
	return (0);
}
