#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s - pointer to the string that is to be reversed
 *
 * Return: None
 */

void rev_string(char *s)
{
int len = 0, i;
char temp[500];

for (i = 0; s[i] != '\0'; i++)
{
len++;
temp[i] = s[i];
}

for (i = 0; i < len; i++)
{
s[i] = temp[len - i - 1];
}
}
