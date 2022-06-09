#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - function to assign a random number to the variable i
 *
 * @i:     integer inputed
* Return: void
*/

void positive_or_negative(int i)
{

srand(time(0));
i = rand() - RAND_MAX / 2;

if (i == 0)
{
printf("%d is zero\n", i);
}

}
