#include "function_pointers.h"

/**
 * array_iterator - function that prints a name.
 *
 * @array: the array to be printed.
 * @size: the size of the array.
 * @action: A pointer to a function that prints a name.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
