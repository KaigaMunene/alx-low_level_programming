#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
