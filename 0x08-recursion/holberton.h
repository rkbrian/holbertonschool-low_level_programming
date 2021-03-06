#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
 * prototypes for recursion
 */

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int _putchar(char c);
int primesearch(int suspr, int pr);
int rev_str(char *s);
int charcomp(char *s, int i, int j);
int sqrcalc(int n, int i);
int wildcmp(char *s1, char *s2);
int _maniac(char *s1, char *s2, int i, int j, char w);
int _str_comp(char *s1, char *s2, int i, int j);


#endif
