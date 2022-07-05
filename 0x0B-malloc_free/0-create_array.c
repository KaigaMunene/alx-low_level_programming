#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initialize it
 *
 * @c: array characters
 * @size: size of the array
 *
 * Return: Null if size = 0 or if it fails, a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

i = 0;
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
