#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the numbers passed to it
 * @n: The number of arguments
 * @...: The arguments
 *
 * Return: The sum of all the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, unsigned int);
va_end(args);
return (sum);
}
