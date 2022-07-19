/*
 * File: 7-print_chessboard.c
 * Auth: Seun
 * Task: writing a function that prints the chessboard.
 */

#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
	_putchar(a[i][j]);
	_putchar('\n');
}
}
