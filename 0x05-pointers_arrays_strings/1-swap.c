#include "main.h"

/**
 * void swap_int - swaps the values of two intergets
 *
 * @int *a and @int *b
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
