#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src
 *
 * @dest: Buffer to copy data of src string to
 * @src: Source string to copy info @dest
 *
 * Return: Pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
