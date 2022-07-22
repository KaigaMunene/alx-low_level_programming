#include "main.h"

/**
 * print_binary - prints a binary number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
unsigned long int i;

i = 0;
while (i < sizeof(unsigned long int) * 8)
{
if ((n & mask) == 0)
_putchar('0');
else
_putchar('1');
mask = mask << 1;
i++;
}
}
