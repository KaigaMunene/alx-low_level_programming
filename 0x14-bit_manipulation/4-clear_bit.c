#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: number to check
 * @index: index of the bit to check
 * Return: 1 if bit is set, 0 if bit is clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;
if (index > sizeof(int) * 8)
{
return (-1);
}

mask = mask << index;
*n = *n & ~mask;
return (1);
}
