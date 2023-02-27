#include "main.h"

/**
 * _strlen - string length
 *
 * @s: string length to be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
