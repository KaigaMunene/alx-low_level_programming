#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: number to check
 * @index: index of the bit to check
 * Return: 1 if bit is set, 0 if bit is clear
 */

int set_bit(unsigned long int *n, unsigned int index)
{
int i = 1;

if (index > sizeof(int) * 8)
{
return (-1);
}

i <<= index;
*n = *n + i;

return (1);
}
