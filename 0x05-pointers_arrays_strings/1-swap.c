#include "main.h"

/**
 * swap_int - Use pointer to update value of int a and int b
 *
 * @a: int variable whose value needs to be updated
 * @b: int variable whose value needs to be updated
 *
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
