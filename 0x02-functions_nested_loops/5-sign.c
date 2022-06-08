#include "main.h"

/**
 * print_sign - Prints the positive or negative sign of the argument, if any
 *
 * @n:          Argument to check against for signs, if any
 *
 * Return:      (1) if @n is a positive number
 *              (0) if @n is zero
 *              (-1) if @n is a negative number
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
