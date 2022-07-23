#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1, i = 0;

while (n >> i)
{
i++;
}

if (i > sizeof(long int) * 8)
{
i = (sizeof(long int) * 8) - 1;
}

while (i--)
{
_putchar(((mask << i) &n) ? '1' : '0');
}
}
