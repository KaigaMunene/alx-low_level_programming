#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer
 * @n: number of elements of the array
 *
 * Return: None
 */

void reverse_array(int *a, int n)
{
int i = 0, b, tmp;

for (b = n - 1; b > i; b--)
{
tmp = a[b];
a[b] = a[i];
a[i] = tmp;
i++;
}
}
