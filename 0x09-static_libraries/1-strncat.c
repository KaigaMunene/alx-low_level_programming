#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int a, b;

for (a = 0; dest[a] != '\0'; a++)
	;
for (b = 0; b < n && src[b] != '\0'; b++)
{
dest[a + b] = src[b];
}
return (dest);
}
