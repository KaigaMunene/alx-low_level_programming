#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a newline
 * 
 * @s: The string to be printed in reverse
 *
 * Return: None
 */

void print_re(char *s)
{
int len = 0, i;

len = _strlen(s);

for (i =1; i <= len; i++)
{
_putchar(s[length -i]);
}
_putchar('\n');
}
