#include "main.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: Pointer for the string
 *
 * Return: None
 */

void puts_half(char *str)
{
int i, length = 0, print_from;

for (i = 0; str[i] != '\0'; i++)
{
length++;
}

print_from = length % 2 == 0 ? (length / 2) : ((length / 2) + 1);

for (i = print_from; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
