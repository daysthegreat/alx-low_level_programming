#include "main.h"

/**
 * clear_bit - sets the value of a given bit
 * @n: pointer to the given bot
 * @index: index of the bit you want to clear
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1ul << index);

	return (1);
}

