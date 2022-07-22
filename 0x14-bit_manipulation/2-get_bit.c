#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index of the bit to check
 * Return: 1 if bit is set, 0 if bit is clear
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1;

mask = mask << index;
if ((n & mask) == 0)
return (0);
else
return (1);
}
