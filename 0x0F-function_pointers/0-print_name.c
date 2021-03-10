#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: input name string
 * @f: pointer to function for the input
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
