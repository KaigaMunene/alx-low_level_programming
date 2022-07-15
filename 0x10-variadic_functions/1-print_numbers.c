#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints numbers
 * @separator: The separator
 * @n: The number of arguments
 * @...: The arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
if (i != 0 && i != n)
{
if (separator != NULL)
{
printf("%s", separator);
}
}

printf("%d", va_arg(ap, int));
}

va_end(ap);
printf("\n");
}
