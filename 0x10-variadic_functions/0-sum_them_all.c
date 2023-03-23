#include "variadic_fucntions.h"

/**
*sum_them_all - add sum of all parameters
*@n: number of parameters
*Return: total sum
*/

int sum_them_all(const unsigned int n, ...)

{

unsigned int i;
va_list list;
int sum;

va_start(list, n);
for (i = 0, sum = 0; i < n; i++)
	sum += va_arg(list, int);

va_end(list);

return (sum);

}
