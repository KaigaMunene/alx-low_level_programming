#include "main.h"
/**
 * print_numbers - Print digits from 0-9, followed by newline
 *
 * Return:       None
 */

void print_numbers(void)
{
int c;

for (c = 0; c <= 9; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
