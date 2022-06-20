#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 *
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
int a, b;
char *alpha_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *alpha_2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; alpha_1[b] != '\0'; b++)
{
if (str[a] == alpha_1[b])
{
str[a] = alpha_2[b];
break;
}
}
}
return (str);
}
