#include "main.h"

/**
 * flip_bits - flips the bits of a number
 * @n: number to flip
 * @m: number to flip
 *
 * Return: void
 */
void flip_bits(unsigned long int *n, unsigned long int *m)
{
unsigned long int i;

i = 0;
while (i < sizeof(unsigned long int) * 8)
{
if (get_bit(*n, i) == get_bit(*m, i))
set_bit(n, i);
else
clear_bit(n, i);
i++;
}
}
