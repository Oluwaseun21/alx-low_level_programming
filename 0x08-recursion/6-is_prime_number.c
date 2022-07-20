/*
 * File: 6-is_prime_number.c
 * Task: Writing a function that returns 1 if the input
 *integer is a prime number, otherwise return 0.
 */

#include "main.h"

int is_divisible(int y, int x);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @y: The number to be checked.
 * @x: The divisor.
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int is_divisible(int y, int x)
{

	if (y % x == 0)
	return (0);
	if (x == y / 2)
	return (1);
	return (is_divisible(y, x + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	return (0);
	if (n >= 2 && n <= 3)
	return (1);
	return (is_divisible(n, div));
}
