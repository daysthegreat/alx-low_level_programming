#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @binary_string: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *binary_string)

{
	unsigned int uint_val = 0;
	int string_len = 0;
	int base = 1;

	if (!binary_string)
		return (0);

	for (string_len = 0; binary_string[string_len] != '\0'; string_len++)
		;

	for (string_len--, base = 1; string_len >= 0; string_len--, base *= 2)

	{
		if (binary_string[string_len] != '0' && binary_string[string_len] != '1')
		{
			return (0);
		}

		if (binary_string[string_len] & 1)
		{
			uint_val += base;
		}
	}

	return (uint_val);
}
