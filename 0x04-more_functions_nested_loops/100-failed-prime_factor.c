#include <stdio.h>

/**
 *main - find the largest prime factor
 *Return: value 0
 */

int main()
{
	int pr, i;
	long int comp;

	comp = 340;
	pr = comp - 1;
	while (pr >= 1)
	{
		pr--;
		if (comp % pr == 0)
		{
			i = 2;
			while (i <= pr)
			{
				i++;
				if (pr % i > 0)
				{
					printf("%d\n", pr);
				break;
				}
			}
		}
	}
	return (0);
}
