#include "main.h"

/**
 * sqrt_of_two_num - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

int sqrt_of_two_num(int a, int b)
{
if (b * b > a)
return (-1);

else if (b * b == a)
return (b);

else
return (sqrt_of_two_num(a, b + 1));

return (1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number whose square root is being returned
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (sqrt_of_two_num(n, 1));
}
