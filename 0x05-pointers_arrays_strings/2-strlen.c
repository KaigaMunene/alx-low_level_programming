#include <string.h>
#include "main.h"

/**
 * _strlen - Return the length of a string argument
 *
 * @s: - Pointer to string variable whose length needs to be returned
 *
 * Return: - Length of string variable that is pointed to by pointer
 */

int _strlen(char *s)
{

int len;

for (len = 0; s[len] != '\0'; len++)
{
return (len);
}
}
