#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index of the bit to check
 * Return: 1 if bit is set, 0 if bit is clear
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(int) * 8)
{
return (-1);
}

return ((n >> index) & 1);
}
