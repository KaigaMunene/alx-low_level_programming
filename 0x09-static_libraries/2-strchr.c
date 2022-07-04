#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a chacter in a string
 *
 * @s: pointer string
 * @c: character
 *
 * Return: a pointer to the first occurrence of character c in the string s
 *
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);

return (NULL);
}
