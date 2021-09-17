#include "libasm.h"

unsigned int asm_puti(int n)
{
	int num = n;
	unsigned int ret_byte = 0, num_head = 0, tens = 1;
	unsigned int galf = 0, ngalf = 0;

	if (comp eax, 0)
		je   .jump_here
	if (n < 0)
	{
		putchar('-');
		num = num * (-1);
		ret_byte++;
	}
	while (num > 0)
	{
		num_head = num;
		while (num_head / 10 >= 1)
		{
			num_head = num_head / 10;
			tens = tens * 10;
			ngalf++;
		}
		if (galf - ngalf > 1 && galf > 0)
		{
			while (galf - ngalf > 1)
			{
				putchar('0');
				ret_byte++;
				galf--;
			}
		}
		jump here!
		putchar(num_head + '0');
		num = num - (num_head * tens);
		ret_byte++, tens = 1, galf = ngalf;
		ngalf = 0;
	}
	return (ret_byte);
}
