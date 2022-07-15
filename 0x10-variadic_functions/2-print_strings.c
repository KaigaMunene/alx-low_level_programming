#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings
 * @separator: The separator
 * @n: The number of arguments
 * @...: The arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;
char *string;

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

string = va_arg(ap, char*);
printf("%s", string != NULL ? string : "(nil)");
}

va_end(ap);

printf("\n");
}