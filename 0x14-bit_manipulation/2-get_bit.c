#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: unsigned long integer to work on
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error oocurs
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned long int hold;

	if (index > 64)
	{
		return (-1);
	}

	hold = n >> index;

	return (hold & 1);
}
