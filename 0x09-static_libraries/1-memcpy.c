#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory area src to dest
 *
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	dest[i] = src[i];

return (dest);
}
