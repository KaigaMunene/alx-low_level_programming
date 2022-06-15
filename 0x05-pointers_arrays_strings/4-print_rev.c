#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - Prints a string in reverse followed by a newline
 * @s: The string to be printed in reverse
 * Return: None
 */

void print_rev(char *s)
{
int len = 0, i;

len = _strlen(s);

for (i = 1; i <= len; i++)
{
_putchar(s[len - i]);
}
_putchar('\n');
}
