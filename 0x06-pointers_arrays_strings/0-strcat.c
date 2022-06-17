#include "main.h"


/**
 * *_strcat - function that concatenates two strings
 * @*dest: string for @src to append to
 * @*src: string to append to @dest
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
