#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 1s and 0s
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, j, k, l;

i = 0;
j = 0;
k = 0;
l = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] == '1')
{
j++;
k = k + (1 << l);
}
i++;
l++;
}

if (j > 32)
return (0);

return (k);
}
