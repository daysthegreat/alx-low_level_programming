#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */

/**
 * Prints the binary representation of a given unsigned long integer.
 *
 * @param n The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	for (int i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)

	{
		unsigned long int mask = 1UL << i;

		putchar((n & mask) ? '1' : '0');
	}

	putchar('\n');
}
