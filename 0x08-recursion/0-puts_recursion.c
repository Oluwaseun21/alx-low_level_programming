/*
 * File: 0-puts_recursion.c
 * Task: Writing a function that prints a string, followed by a new line.
 */
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
	else
	_putchar('\n');
}
