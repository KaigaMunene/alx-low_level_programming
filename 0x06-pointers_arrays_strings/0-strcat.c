#include "main.h"
#include "2-strlen.c"

/**
 * *_strcat - function that concatenates two strings
 * @*dest: string for @src to append to
 * @*src: string to append to @dest
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int i, dest_length, src_length;

dest_length = _strlen(dest);
src_length = _strlen(src);

for (i = 0; i < src_length; i++)
{
dest[dest_length + i] = src[i];
}

dest[dest_length + src_length] = '\0';

return (dest);
}
