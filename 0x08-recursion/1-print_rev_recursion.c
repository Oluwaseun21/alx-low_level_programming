/*
 * File: 1-print_rev_recursion.c
 * Task: Writing a function that prints a string in reverse.
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
