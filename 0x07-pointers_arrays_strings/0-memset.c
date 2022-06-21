#include "main.h"

/**
 * _memset - function that copies memory area
 *
 * @s: the address of memory to print
 * @b: constant byte
 * @n: size of the memory to print
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
