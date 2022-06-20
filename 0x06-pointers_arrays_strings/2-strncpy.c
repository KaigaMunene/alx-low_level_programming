#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: address of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;

a = 0;
while (a < n && *(src + a))
{
*(dest + a) = *(src + a);
a++;
}
while (a < n)
{
*(dest + a) = '\0';
a++;
}
return (dest);
}
