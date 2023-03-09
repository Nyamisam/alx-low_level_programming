#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: input number
 * Return: factorial of the numberr
 */
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
