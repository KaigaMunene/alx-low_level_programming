#include "main.h"

/**
 * _isdigit - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is digit or 0 if is not a digit
 */

int _isdigit(int c)
{

int digit = 0;
int num;

for (num = 0; num < 9; num++)
{
if (c == num)
{
digit = 1;
}
return (digit);
}
}
