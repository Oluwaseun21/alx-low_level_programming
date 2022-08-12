#include <stdio.h>

/**
 * Bmain - Prints a string before the
 *        main function is executed.
 * Return: nothing.
 */

void __attribute__ ((constructor)) Bmain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
