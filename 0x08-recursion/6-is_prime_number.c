#include "main.h"

/**
 * check_prime_number - searches for if a number is prime
 *
 * @a: the number to check
 * @b: the numbers we'll go through
 *
 * Return: Whether or not the number is a prime number
 */

int check_prime_number(int a, int b)
{
if (a <= 1 || a % b == 0)
return (0);

else if (a == b)
return (1);

else if (a > b)
check_prime_number(a, b + 1);

return (1);
}

/**
 * is_prime_number - function that return 1 if its a prime number else 0
 *
 * @n: integer thats checked to see if its a prime number
 *
 * Return: 1 if its a prime number or 0 if it isn't
 */

int is_prime_number(int n)
{
return (check_prime_number(n, 2));
}
