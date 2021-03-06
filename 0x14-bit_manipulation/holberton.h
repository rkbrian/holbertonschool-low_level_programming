#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to char string of 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
/*unsigned long int _powertool(unsigned long int a);*/

#endif
