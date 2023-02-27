#include "main.h"

/**
 * void swap_int - swaps the values of two intergets
 *
 * @a: integer to be swapped
 * @b: integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
