#include "main.h"

/**
 *_strlen_recursion - prints length of a string
 *@n: int type
 *Return: factorial of n
 */

int factorial(int n)

{

if (n < 0)

return (-1);

else if (n < 2)
return (n);
else
return (n * factorial(n - 1));

}
