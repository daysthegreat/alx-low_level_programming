#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: pointer to decimal num passed
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;

	if (index > 64)
		return (-1);

	for (q = 1; index > 0; index--, q *= 2)
		;
	*n += q;

	return (1);
}

