#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

void positive_or_negative(int i)
{
int i;

srand(time(0));
i = rand() - RAND_MAX / 2;

if (i == 0)
{
printf(i, "%d is zero\n");
}

}
