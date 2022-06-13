#include "main.h"

/**
 * more_numbers - Print out 0-14 followed by newline, 10 times
 *
 * Return:        None
 */
void more_numbers(void)
{
int c;
int i;

for (c = 0; c < 10; c++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
