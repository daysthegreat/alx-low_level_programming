#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
	if (*b != '0' && *b != '1')
		return (0);
	num = num * 2 + (*b - '0');
        b++;
	}

	return (num);
}
