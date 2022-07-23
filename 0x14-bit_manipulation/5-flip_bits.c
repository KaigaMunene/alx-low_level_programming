#include "main.h"

/**
 * flip_bits - flips the bits of a number
 * @n: number to flip
 * @m: number to flip
 *
 * Return: number of bits needed to flip to turn n into m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
unsigned long int num = (n ^ m);

while (num)
{
if (num & 1)
{
i++;
}
num >>= 1;
}
return (i);
}
