#include <stdio.h>

/**
 *main - print 1 to 100 with some num replaced w words
 *Return: value 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 15 > 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 15 > 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("Buzz\n");
	return (0);
}
