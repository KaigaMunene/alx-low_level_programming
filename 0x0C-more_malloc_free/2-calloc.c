#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: the number of elements
 * @size: the size of that element type
 *
 * Return:	If nmemb or size is 0, then _calloc returns NULL
 *		If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

if (size == 0 || nmemb == 0)
return (NULL);

arr = malloc(size * nmemb);
if (arr == NULL)
return (NULL);

for (i = 0; i < (size * nmemb); i++)
arr[i] = 0;

return (arr);
}
