#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;

while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');

return (0);
}
