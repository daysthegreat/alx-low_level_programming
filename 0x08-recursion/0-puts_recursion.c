#include "main.h"
/**
*_puts_recursion - prints a string
*@s: pointer block memory to fill
*return: void
*/

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_puchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s+1_);

}
