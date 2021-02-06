#include <stdio.h>

/**
 *main - base 10 digit numbers with comma and space, using putchar only
 *Return: value 0
 */

int main(void)
{
	int i;
  
	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i < '9')
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
