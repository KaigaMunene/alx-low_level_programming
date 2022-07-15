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
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
if (i != 0 && i != n)
{
if (separator != NULL)
{
printf("%s", separator);
}
printf("%d", va_arg(args, int));
}
}
va_end(args);
printf("\n");
}
