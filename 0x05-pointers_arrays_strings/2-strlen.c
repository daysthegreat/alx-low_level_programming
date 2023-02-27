#include "main.h"

/**
 * _strlen - string length
 *
 * @s: parameters
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
