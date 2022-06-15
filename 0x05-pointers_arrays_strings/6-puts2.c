#include "main.h"

/**
 * puts2 - Prints every other character of a str ,starting with the first char
 * @str: Pointer to the string
 *
 * Return: None
 */

void puts2(char *str)
{
int i, print_every = 2;

for (i = 0; str[i] != '\0'; i++)
{
if (i % print_every == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
