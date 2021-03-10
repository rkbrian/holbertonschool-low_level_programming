#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

/**
 * function_pointers - prototypes for function pointers
 * print_name - print name
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f)(char *));



#endif
