#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
char lower, upper;
int letter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
letter = 1;
}
}
return (letter);
}
