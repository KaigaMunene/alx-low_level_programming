#include "main.h"

/**
 * print_most_numbers - Prints 0-9 (sans 2 & 4) to stdout
 *
 * Return:              None
 */

void print_most_numbers(void)
{
int c;

for (c = 0; c <= 9; c++)
{
if (c =! 2 && c =! 4)
{
	_putchar(i + '0');
}
_putchar('\n');
}
}
