#include "variadic_functions.h"

/**
*print_strings - prints strings
*@separator: string to be printed between numbers
*@n: number of integers passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)

{

va_list valist;
unsigned int i;
char *str;

va_start(valist, n);

for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);

if (str)
printf("%s", str);
else
printf("(nil)");

if (i < n - 1)
if (separator)
printf("%s", separator);
}

printf("\n");
va_end(valist);

}
